#include "main.h"

/**
 * print_binary - function to print binary repr of a number
 *
 * Description:
 * @n: parameter
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int b, count = 0;
	unsigned long int present;

	for (b = 63; b >= 0; b--)
	{
		present = n >> b;

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
