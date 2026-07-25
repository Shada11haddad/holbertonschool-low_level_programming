#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The source string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL
 *         or if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *dub;
	unsigned int len = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);


	while (str[len] != '\0')
	{
		len++;
	}


	dub = malloc((len + 1) * sizeof(char));
	if (dub == NULL)
		return (NULL);


	for (i = 0; i <= len; i++)
	{
		dub[i] = str[i];
	}

	return (dub);
}
