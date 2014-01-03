
CC     ?= cc
SRC     = $(wildcard src/*.c)
SRC    += $(wildcard deps/*/*.c)
CFLAGS  = -std=c99 -Ideps -Isrc
CFLAGS += -Wall -Wextra

test: deps
	$(CC) $(CFLAGS) -o $@ test.c $(SRC)
	./test

deps: package.json
	@clib install

travis:
	git clone https://github.com/clibs/clib.git
	$(MAKE) install -C clib
	$(MAKE) deps test

clean:
	rm -rf test deps clib

.PHONY: test
