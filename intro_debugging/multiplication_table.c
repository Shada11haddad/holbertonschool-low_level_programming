#include <stdio.h>

/**
 * print_table - Prints a multiplication table of a given size.
 * @size: The dimensions of the table (size x size).
 */
void print_table(int size)
{
	int row, col;

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
		{
			printf("%d ", row * col);
		}
		printf("\n");
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	print_table(4);
	return (0);
}
