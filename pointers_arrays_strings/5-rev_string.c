#include "main.h"

/**
 * rev_string - reverses a string in-place
 * @s: the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char temp;

	/* Find the total length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Swap characters from the ends toward the middle */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
