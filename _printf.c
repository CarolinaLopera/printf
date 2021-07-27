#include "holberton.h"
/**
 * _printf - Function to print strings and characters in console.
 *
 * Return: Always a int equivalent to the print length.
 * @format: is a char pointer to a string that takes to print.
 */
int _printf(const char *format, ...)
{
	int i, j;
	va_list any;
	int len = _strlen(format);

	print_t p[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_int},
		{"d", print_int},
		{NULL, NULL}
	};
	va_start(any, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; p[j].string != NULL; j++)
			{
				if (format[i + 1] == *(p[j].string))
				{
					len += p[j].fun(any);
					len -= 2;
					format++;
				}
			}
		}
		else
			_putchar(format[i]);
	}
	va_end(any);
	return (len);
}
