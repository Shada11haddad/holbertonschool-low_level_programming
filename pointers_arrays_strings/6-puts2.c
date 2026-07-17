#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int len = 0;
	int i;

	/* Find the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Print characters at even indices */
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
