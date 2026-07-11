#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet from a to z
 * followed by a new line.
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
