#include "main.h"

/**
 * times_table - prints times table
 *
 * Return: void
 *
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	for (j = 1; j <= 9; j++)
	{
		k = (i * j);
	if ((k / 10) > 0)
	{
		_putchar((k / 10) + '0');
	}
	else
	{
		_putchar(' ');
	}
		_putchar((k % 10) + '0');

	if (j < 9)
	{
		_putchar(',');
	      _putchar(' ');
	}
	}
	_putchar('\n');
	}

}
