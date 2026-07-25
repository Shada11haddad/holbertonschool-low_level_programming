#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the new string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j;
	int len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;
	for (i = 0; s2[i]; i++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[i] = s1[i];

	for (j = 0; s2[j]; j++, i++)
		concat[i] = s2[j];

	concat[i] = '\0';

	return (concat);
}
