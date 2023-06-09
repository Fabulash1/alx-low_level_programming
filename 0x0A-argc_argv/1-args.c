#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always null if it works!
 */

int main(int argc, char **argv)
{
	(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
