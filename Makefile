
test: test.c src/path-normalize.c src/str-copy.c
	$(CC) -std=c99 $^ -o $@
	./test

.PHONY: test
