#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 *
 * @b: string containing the binary number
 * 
 * Return: converted number
 */

unsigned int biny_to_uint(const char *a)
{
	int i;
	unsigned int deci_val = 0;

	if (!a)
		return (0);

	for (i = 0; a[i]; i++)
	{
		if (a[i] < '0' || a[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (a[i] - '0');
	}
	return (deci_val);
}
