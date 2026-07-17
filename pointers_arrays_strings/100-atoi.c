#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the integer converted from the string, or 0 if no numbers
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		/* Track all the negative signs encountered before the number */
		if (s[i] == '-')
		{
			sign *= -1;
		}
		/* Once a digit is found, calculate the number */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * 10) + (s[i] - '0');

			/* Break the loop if the next character is not a digit */
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		}
		i++;
	}

	return (num * sign);
}
