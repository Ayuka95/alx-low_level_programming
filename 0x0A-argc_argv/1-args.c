#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the number of arguments passed to it.
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	(void) argv;

	printf("%i\n", argc - 1);

	return (0);
}
