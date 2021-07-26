#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdarg.h>

/**
 * struct print - This structure takes arguments to the create a object.
 *
 * @strings: Is a strings that get the structure.
 * @fun: Is a function associated that call the structure.
 */
typedef struct print
{
    char string;
    int (*fun)(va_list);
} print_t;

int _printf(const char *format, ...);
int _putchar(char c);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
void _puts(char *str);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);

#endif