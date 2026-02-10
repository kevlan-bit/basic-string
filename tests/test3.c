#include <stdio.h>
#include <basicstring.h>

int main() {
    string_t *str;
    if ( string_new("Hello, World", &str) != 0 ) {
        printf("basic-string memory error\n");
        return 1;
    }

    string_putc('!', str);
    printf("%s\n", str->str);

    string_free(str);
    return 0;
}