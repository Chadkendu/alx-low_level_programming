#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - function to sets the value of a bit to 0 at a given index
 *
 * Description:
 * @w: parameter
 * @index: index
 *
 * Return: 1 if success, -1 if error
 */

int clear_bit(unsigned long int *w, unsigned int index)
{
	if (index > sizeof(w) * 8)
		return (-1);
	*w &= ~(1 << index);
	return (1);
}
