#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of program
 * @argc: Counts arguments
 * @argv: Arguments
 * Return: Always 0 if (Success)
 */

int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
