#include <stdio.h>
#include <Cstring.h>

int main() {
    string_t* str;
    string_t* str2;
    if (string_new("Hello, ", &str) != 0) {
        printf("String memory error\n");
        return 1;
    }

    printf("%s\n", str->str);
    string_append("World", str);
    printf("%s\n", str->str);
    string_putc('!', str);
    printf("%s\n", str->str);

    string_free(str);

    if (string_new("teste", &str2) != 0) {
        printf("String memory error\n");
        return 1;
    }
    string_append("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", str2);

    printf("%s\n", str2->str);

    string_free(str2);
    return 0;
}