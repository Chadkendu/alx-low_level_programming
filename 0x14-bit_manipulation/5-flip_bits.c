#include "main.h"

/**
 * flip_bits - function that get the number of bits
 *
 * Description:
 * @w: parameter
 * @n: destination
 *
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int w, unsigned long int n)
{
	unsigned int b, no_flips = 0;
	unsigned long int d = sizeof(unsigned long int) * 8;

	for (b = 0; b < d; b++)
	{
		if ((n & 1) != (w & 1))
			no_flips += 1;
		w = w >> 1;
		n = n >> 1;
	}
	return (no_flips);
}
