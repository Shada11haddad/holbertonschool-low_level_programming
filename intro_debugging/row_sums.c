#include <stdio.h>

int row_sum(int row, int cols);
int total_sum(int rows, int cols);

/**
 * row_sum - Computes the sum of a specific row's products.
 * @row: The current row number.
 * @cols: The total number of columns.
 *
 * Return: The sum of the row.
 */
int row_sum(int row, int cols)
{
	int c;
	int sum = 0;

	for (c = 1; c <= cols; c++)
	{
		sum += row * c;
	}

	return (sum);
}

/**
 * total_sum - Computes the grand total sum of all rows.
 * @rows: The total number of rows.
 * @cols: The total number of columns.
 *
 * Return: The total combined sum.
 */
int total_sum(int rows, int cols)
{
	int r;
	int total = 0;
	int current = 0;

	for (r = 1; r <= rows; r++)
	{
		current = row_sum(r, cols);
		total += current;
	}

	return (total);
}

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%d\n", total_sum(3, 3));
	return (0);
}
