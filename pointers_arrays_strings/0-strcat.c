#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: a pointer to the destination string
 * @src: a pointer to the source string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	/* Find the length/end of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append the source string starting at the null terminator of dest */
	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	/* Add the terminating null byte at the very end */
	dest[dest_len] = '\0';

	return (dest);
}
