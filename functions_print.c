#include "holberton.h"
/**
 * print_char - Function to print characters in console.
 *
 * Return: Always void.
 * @a: is a char that takes to print.
 */
void print_char(va_list any)
{
	_putchar(va_arg(any, int));
}
