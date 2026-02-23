#include "../inc/basicstring.h"
#include <stdio.h>

int main(int argc, char **argv) {
  string_t *str;
  if (string_new("Hello, ", &str) != 0) {
    printf("basic-string error\n");
    return 1;
  }

  string_concat("World", str);
  string_putc('!', str);
  printf("%s\n", string_gets(str));
  string_free(str);
  return 0;
}
