#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	/* Find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Print characters from the last valid index down to 0 */
	for (len -= 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}
