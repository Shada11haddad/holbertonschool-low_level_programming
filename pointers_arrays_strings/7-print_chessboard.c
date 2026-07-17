#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: a pointer to an array of 8 characters
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	/* Iterate through each of the 8 rows */
	for (i = 0; i < 8; i++)
	{
		/* Iterate through each column in the current row */
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		/* Print a newline at the end of each row */
		_putchar('\n');
	}
}
