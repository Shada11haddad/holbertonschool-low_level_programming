#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string to modify
 *
 * Return: a pointer to the modified string
 */
char *string_toupper(char *str)
{
	int i = 0;

	/* Iterate through the string until the null terminator is found */
	while (str[i] != '\0')
	{
		/* Check if the character is a lowercase letter */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* Convert to uppercase by subtracting 32 (ASCII difference) */
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
