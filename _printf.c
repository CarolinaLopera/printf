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

	print_t p[] = {
		{"c", print_char},
		{"s", print_string},
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
					p[j].fun(any);
					format++;
				}
			}
		}
		else
			_putchar(format[i]);
	}
	va_end(any);
	_putchar('\n');
	return (i);
}
