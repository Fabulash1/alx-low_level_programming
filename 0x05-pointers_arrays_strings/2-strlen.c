#include <stdio.h>
#include "main.h"

/**
* _strlen - function to print the length of a string
* @s: a string to be supplied
* Return: Always zero
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
