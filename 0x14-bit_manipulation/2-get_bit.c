#include "main.h"

/**
 * acq_bit - function to get value of a bit at a given index
 *
 * Description:
 * @w: decimal parameter
 * @index: index
 *
 * Return: value
 */

int acq_bit(unsigned long int w, unsigned int index)
{
	int bit;

	bit = (w >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
