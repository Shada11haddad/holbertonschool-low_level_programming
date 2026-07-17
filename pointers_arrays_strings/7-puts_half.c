#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: the string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	/* Find the total length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Calculate the starting index based on whether the length is even or odd */
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}

	/* Print the second half of the string */
	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}
