#ifndef CSTRING_H
#define CSTRING_H
#include <stddef.h>

typedef struct {
    char* str;
    size_t size;
    size_t capacity;
} string_t;

int string_new(const char *s, string_t **str);
void string_free(string_t *str);
void string_append(const char *s, string_t *str);
int string_compare(string_t *s1, string_t *s2);
void string_putc(char c, string_t *str);

#endif