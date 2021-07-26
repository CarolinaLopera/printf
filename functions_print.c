#include "holberton.h"
/**
 * print_char - Function to print characters in console.
 *
 * Return: Always void.
 * @any: is a char that takes to print.
 */
void print_char(va_list any)
{
	_putchar(va_arg(any, int));
}

/**
 * print_string - Function to print string in console.
 *
 * Return: Always void.
 * @any: is a char that takes to print.
 */
void print_string(va_list any)
{
	int i, j;
	char *str;
	char *n;

	n = "(null)";
	str = va_arg(any, char *);
	if (str == NULL)
	{
		for (j = 0; n[j] != '\0'; j++)
			_putchar(n[j]);
	}
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
