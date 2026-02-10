#include <basicstring.h>
#include <stdlib.h>
#include <string.h>

int string_new(const char *s, string_t **str) {
    *str = malloc(sizeof(string_t));
    if (*str == NULL) return -1;
    (*str)->capacity = strlen(s)*2+1;
    (*str)->size = strlen(s);
    (*str)->str = malloc((*str)->capacity);

    if ((*str)->str == NULL) {
        free(*str);
        return -1;
    }
    strcpy((*str)->str, s);
    return 0;
}

void string_append(const char *s, string_t *str) {
    if (str->capacity-1 < strlen(s)) {
        if (str->capacity*2 < strlen(s)) {
            str->capacity += strlen(s);
        }
        str->capacity *= 2;
        str->str = realloc(str->str, str->capacity);
    }
    strcat(str->str, s);
    str->size = strlen(str->str);
}

int string_compare(string_t *s1, string_t *s2) {
    return strcmp(s1->str, s2->str);
}

void string_putc(char c, string_t *str) {
    if (str->capacity-1 < str->size+1) {
        str->capacity += 1;
        str->str = realloc(str->str, str->capacity);
    }
    str->str[str->size] = c;
    str->str[str->size+1] = '\0';
    str->size += 1;
}

void string_free(string_t *str) {
    free(str->str);
    free(str);
}