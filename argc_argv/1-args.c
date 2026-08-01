#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program.
 * @argc: the number of command line arguments
 * @argv: an array containing the program command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /* explicitly ignore the unused argv variable */

	printf("%d\n", argc - 1);

	return (0);
}
