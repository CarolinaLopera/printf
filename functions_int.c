#include "holberton.h"
/**
 * pr_int - Function to print numbers int in console.
 *
 * Return: Always void.
 * @n: is an integer that takes to print.
 */
void pr_int(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		pr_int(n / 10);
	}
	_putchar((n % 10) + '0');
}

/**
 * print_int - Function to call function that print int in console.
 *
 * Return: Always int length digit.
 * @any: is a char that takes to print.
 */
int print_int(va_list any)
{
	int count = 0;
	int n = va_arg(any, int);
	int nc, i;

	if (n < 0)
		count++;

	nc = n / 10;

	while (i == 0)
	{
		if (nc != 0)
		{
			nc = nc / 10;
			count++;
		}
		else
		{
			count++;
			i++;
		}
	}
	pr_int(n);
	return (count);
}
