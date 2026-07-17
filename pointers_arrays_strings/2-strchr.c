#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to find
 *
 * Return: a pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	/* Iterate through the string until the null byte is reached */
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	/* Check if the target character is the null byte itself */
	if (*s == c)
	{
		return (s);
	}

	/* Return NULL if the character was not found */
	return (NULL);
}
