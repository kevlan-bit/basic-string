#include "../inc/basicstring.h"
#include <stdio.h>

int main(int argc, char **argv) {
  string_t *str1;
  string_t *str2;
  if (string_new("Hello, World", &str1) != 0) {
    printf("basic-string error\n");
    return 1;
  }
  if (string_new("Hello, World!", &str2) != 0) {
    printf("basic-string error\n");
    return 1;
  }

  if (string_compare(str1, str2) == 0) {
    printf("OK\n");
  } else {
    printf("NOT OK\n");
  }

  string_free(str1);
  string_free(str2);
  return 0;
}
