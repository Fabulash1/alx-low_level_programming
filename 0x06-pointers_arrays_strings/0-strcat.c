#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: first string
 * @src: second string
 * Return: to designated string
 */

char *_strcat(char *dest, char *src)
{
	int length, n;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (n = 0; src[n] != '\0'; n++, length++)
	{
		dest[length] = src[n];
	}

	dest[length] = '\0';
	return (dest);
}
