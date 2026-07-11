#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char ch;

	num = 0;
	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}

	ch = 'a';
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
