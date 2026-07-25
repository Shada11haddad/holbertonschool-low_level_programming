#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings using at most n bytes from s2
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes from s2 to concatenate
 *
 * Return: pointer to the newly allocated space, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	/* إذا كان n أكبر من طول s2، نكتفي بطول s2 بالكامل */
	if (n >= len2)
		n = len2;

	/* حجز الذاكرة: طول s1 + الحروف المطلوبة من s2 + واحد لحرف النهاية */
	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);

	/* نسخ الكلمة الأولى s1 */
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	/* نسخ أول n حرف فقط من الكلمة الثانية s2 */
	while (j < n)
	{
		concat[i] = s2[j];
		i++;
		j++;
	}

	concat[i] = '\0';

	return (concat);
}
