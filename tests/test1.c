#include <stdio.h>
#include <basicstring.h>

int main() {
    string_t *str;
    if ( string_new("teste", &str) != 0 ) {
        printf("basic-string memory error\n");
        return 1;
    }
    string_free(str);
    return 0;
}