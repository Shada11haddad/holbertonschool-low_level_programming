#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the set of bytes to be searched for
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	/* Iterate through each character of the string s */
	while (*s != '\0')
	{
		/* Check the current character of s against all characters in accept */
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				/* Return a pointer to the current position in s */
				return (s);
			}
		}
		/* Move to the next character in s */
		s++;
	}

	/* Return NULL if no match is found */
	return (NULL);
}
