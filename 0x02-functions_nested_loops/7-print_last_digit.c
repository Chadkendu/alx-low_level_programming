#include "math.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * Description: a function that prints the last digit of a number.
 *
 * @n : number to check
 *
 * Return: Always 0 or 1 (success)
 *
 */

int print_last_digit(int n)
{
	int nv;

	if (n < 0)
	{
		nv = -1 * (n % 10);
	}
	else
	{
		nv = n % 10;
	}
	_putchar(nv + '0');
	return (nv);
}
