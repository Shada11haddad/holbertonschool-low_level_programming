#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the string containing the characters to match
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	/* Iterate through each character of the main string */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Check if the current character in s matches any character in accept */
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break; /* Match found, break out of the inner loop */
			}
		}

		/* If we reached the end of accept without finding a match */
		if (accept[j] == '\0')
		{
			return (count);
		}

		/* Increment the count for each matched character */
		count++;
	}

	return (count);
}
