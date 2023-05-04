#include "main.h"

/**
 * binary_print - function to print binary representation of a number
 *
 * Description:
 * @w: parameter
 *
 * Return: void
 */

void binary_print(unsigned long int w)
{
	int b, count = 0;
	unsigned long int present;

	for (b = 63; b >= 0; b--)
	{
		present = w >> b;

		if (present & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
