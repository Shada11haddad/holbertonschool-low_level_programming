#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2
 *
 * Return: pointer to new space, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int l1 = 0, l2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	if (n >= l2)
		n = l2;
	c = malloc(sizeof(char) * (l1 + n + 1));
	if (c == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		c[i] = s2[j];
		i++;
		j++;
	}
	c[i] = '\0';
	return (c);
}
