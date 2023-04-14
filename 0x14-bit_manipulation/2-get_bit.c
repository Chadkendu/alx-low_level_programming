#include "main.h"

/**
 * get_bit - value of a bit at a given index
 *
 * description - a function that get the value of a bit
 *
 * @n: decimal parameter
 * 
 * @index: index
 * 
 * Return: val
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
