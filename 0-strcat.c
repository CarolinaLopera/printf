#include "holberton.h"
# include <string.h>
/**
 * _strcat - Concatenates the second string and the end of the first string .
 * @dest: string1
 * @src: string2
 *
 * Return: char*.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i]; i++)
	{}
	for (j = 0; src[j] != 0; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = 0;
	return (dest);
}
