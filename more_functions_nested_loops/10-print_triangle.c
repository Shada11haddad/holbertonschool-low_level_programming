#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle,
 * followed by a new line.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int row, hashes, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = 0; spaces < (size - row); spaces++)
			{
				_putchar(' ');
			}
			for (hashes = 0; hashes < row; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
