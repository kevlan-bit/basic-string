#include <stdio.h>
#include <basicstring.h>

int main(int argc, char **argv) {
  string_t *s;
  if ( string_new("teste", &s) != 0 ) {
    printf("basic-string memory error\n");
    return 1;
  }
  char *str = string_gets(s);
  printf("%s\n", str);

  string_free(s);
  return 0;
}
