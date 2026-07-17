#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be modified
 *
 * Return: a pointer to the modified string
 */
char *cap_string(char *str)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	/* Check and capitalize the very first character if it's lowercase */
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}

	/* Iterate through the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Check if the current character is one of the separators */
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j])
			{
				/* If the next character is lowercase, capitalize it */
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
				break;
			}
		}
	}

	return (str);
}
