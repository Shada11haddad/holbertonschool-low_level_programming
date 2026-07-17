#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to search within
 * @needle: the substring to find
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	/* Iterate through the haystack string */
	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		/* Compare characters as long as they match and needle isn't empty */
		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		/* If we reached the end of the needle, we found a complete match */
		if (*n == '\0')
		{
			return (haystack);
		}

		/* Move to the next character in haystack and try again */
		haystack++;
	}

	/* Edge case: if needle is empty, return the original haystack */
	if (*needle == '\0')
	{
		return (haystack);
	}

	return (NULL);
}
