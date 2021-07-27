#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct print - This structure takes arguments to the create a object.
 *
 * @string: Is a strings that get the structure.
 * @fun: Is a function associated that call the structure.
 */
typedef struct print
{
	char *string;
	int (*fun)(va_list any);
} print_t;

int _printf(const char *format, ...);
int print_char(va_list any);
int print_string(va_list any);
int print_percent(va_list any);
int print_int(va_list any);
void pr_int(int n);

int _putchar(char c);
char *_strcat(char *dest, char *src);
int _strlen(const char *s);
void _puts(char *str);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);

#endif
