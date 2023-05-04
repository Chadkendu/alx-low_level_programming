#include "main.h"

/**
 * get_bit - function to get value of a bit at a given index
 *
 * Description:
 * @n: decimal parameter
 * @index: index
 *
 * Return: value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
