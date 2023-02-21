#include "main.h"

/**
 * _print_sign - prints the sign of a number
 *
 * Description: a function that prints the sign of a number.
 *
 * @c : character to check for a number
 *
 * Return: Always 0 or 1 (success)
 *
 */

int print_sign(int n)
{
	int parv;

	if (n > 0)
	{
		parv = 1;
		_putchar ('+');
	}
	else if (n == 0)
	{
		parv = 0;
		_putchar ('0');
	}
	else
	{
		parv = -1;
		_putchar ('-');
	}
	return (parv);
}
