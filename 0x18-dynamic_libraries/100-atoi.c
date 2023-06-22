#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * Description:
 * @s: string to be converted
 *
 * Return: the integer converted from the string
 */

int _atoi(char *s)
{
	int i, len, d, f, n, digit;

	i = 0;
	len = 0;
	n = 0;
	d = 0;
	digit = 0;
	f = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
