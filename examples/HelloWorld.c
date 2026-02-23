#include "../inc/basicstring.h"
#include <stdio.h>

int main(int argc, char **argv) {
  string_t *str;
  if (string_new("Hello World!\n", &str) != 0) {
    printf("basic-string error\n");
    return 1;
  }
  // or str->str
  printf("%s", string_gets(str));
  string_free(str);
  return 0;
}
