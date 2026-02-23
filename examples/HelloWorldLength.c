#include "../inc/basicstring.h"
#include <stdio.h>

int main(int argc, char **argv) {
  string_t *str;
  int len;
  if (string_new("Hello, World!", &str) != 0) {
    printf("basic-string error\n");
    return 1;
  }
  len = string_len(str);

  printf("String length: %d\n", len);
  string_free(str);
  return 0;
}
