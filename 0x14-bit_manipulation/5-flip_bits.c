#include "main.h"

/**
 * flip_bits - function that get the number of bits
 *
 * Description:
 * @n: parameter
 * @m: destination
 *
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int b, no_flips = 0;
	unsigned long int d = sizeof(unsigned long int) * 8;

	for (b = 0; b < d; b++)
	{
		if ((m & 1) != (n & 1))
			no_flips += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (no_flips);
}
