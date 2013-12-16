
#include <string.h>
#include <assert.h>
#include "path-normalize.h"

int main(int argc, char **argv) {
  assert(NULL == path_normalize(NULL));
  assert(0 == strcmp("/home/stephen/", path_normalize("/home//stephen//")));
  assert(0 == strcmp("home/stephen/", path_normalize("home//stephen//")));
  assert(0 == strcmp("/home/stephen/", path_normalize("//home/stephen//")));
  return 0;
}
