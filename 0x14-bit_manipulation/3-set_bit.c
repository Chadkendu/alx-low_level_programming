#include "main.h"
#include <stdlib.h>

/**
 * alloc_bit - funtion to sets the value of a bit to 1 at a given index
 *
 * Description:
 * @w: parameter
 * @index: index
 *
 * Return: value
 */

int alloc_bit(unsigned long int *w, unsigned int index)
{
	if (index > sizeof(w) * 8)
		return (-1);
	*w |= (1 << index);
	return (1);
}
