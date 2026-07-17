#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string to compare
 * @s2: the second string to compare
 *
 * Return: an integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* Loop through both strings as long as the characters match */
	while (s1[i] == s2[i])
	{
		/* If we reach the null byte of s1, the strings are identical */
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}

	/* Return the difference of the first non-matching characters */
	return (s1[i] - s2[i]);
}
