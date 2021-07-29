#include "holberton.h"

/**
 * print_char - Function to print characters in console.
 *
 * Return: Always void.
 * @any: is a char that takes to print.
 */
int print_char(va_list any)
{
	_putchar(va_arg(any, int));
	return (1);
}

/**
 * print_string - Function to print string in console.
 *
 * Return: Always void.
 * @any: is a char that takes to print.
 */

int print_string(va_list any)
{
	int i;
	char *str;

	str = va_arg(any, char *);
	if (str == NULL)
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_percent - Function to print string in console.
 *
 * Return: Always void.
 * @any: is a char that takes to print.
 */
int print_percent(va_list any)
{
	char a;
	(void)any;

	a = '%';
	_putchar(a);
	return (1);
}
