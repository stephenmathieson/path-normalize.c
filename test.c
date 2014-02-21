
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "path-normalize.h"

int
main(void) {
  char *path = NULL;

  assert(NULL == path_normalize(NULL));

  path = path_normalize("/home//stephen//");
  assert(0 == strcmp("/home/stephen/", path));
  free(path);

  path = path_normalize("home//stephen//");
  assert(0 == strcmp("home/stephen/", path));
  free(path);

  path = path_normalize("/home//stephen//");
  assert(0 == strcmp("/home/stephen/", path));
  free(path);

  path = path_normalize("////home//stephen");
  assert(0 == strcmp("/home/stephen", path));
  free(path);

  return 0;
}
