#include "main.h"

/**
 * binary_to_uint - converts binary number-unsigned integer
 *
 * Description:
 * @b: string with the binary number
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int decimalVal = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		decimalVal = 2 * decimalVal + (b[a] - '0');
	}
	return (decimalVal);
}
