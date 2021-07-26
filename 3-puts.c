#include "holberton.h"

/**
 * _puts - Print a string following of a new line.
 * @str: text string
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}


