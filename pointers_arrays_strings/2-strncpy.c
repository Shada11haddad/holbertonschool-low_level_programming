#include "main.h"

/**
 * _strncpy - copies a string up to n bytes
 * @dest: the destination buffer
 * @src: the source string
 * @n: the maximum number of bytes to copy
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy characters from src to dest up to n bytes or until null byte */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* If src is shorter than n, pad the rest of dest with null bytes */
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
