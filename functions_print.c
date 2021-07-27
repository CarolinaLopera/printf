#include "holberton.h"

void pr_int(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }
    if (n / 10 != 0)
        pr_int(n / 10);
    _putchar((n % 10) + '0');
}

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
	int i, j;
	char *str;
	char *n;

	n = "(null)";
	str = va_arg(any, char *);
	if (str == NULL)
	{
		for (j = 0; n[j] != '\0'; j++)
			_putchar(n[j]);
		return (j);
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

/**
 * print_char - Function to print characters in console.
 *
 * Return: Always void.
 * @any: is a char that takes to print.
 */
int print_int(va_list any)
{
	pr_int(va_arg(any, int));
	return (0);
}
