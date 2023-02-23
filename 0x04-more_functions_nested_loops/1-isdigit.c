#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 *
 * Description: Write a function that checks for a digit (0 through 9).
 * @c: character to check
 *
 * Return: 0 if not a digit and 1 if it a digit
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
