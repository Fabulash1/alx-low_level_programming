#include <stdio.h>
#include "main.h"

/**
 * _strcpy - a function that copies string pointed to src and dest
 *
 * @dest: Pointer parameter
 * @src: poiter parameter
 *
 * Return: character
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
