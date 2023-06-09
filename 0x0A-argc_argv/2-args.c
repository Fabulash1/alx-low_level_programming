#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always null if it works
 */

int main(int argc, char **argv)
{
	/*Declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/*WHILE - Print each arguments*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
