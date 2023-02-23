#include "main.h"

/**
 * is_upper - checks if a character is uppercase
 *
 * Description: Write a function that checks for uppercase character.
 * @c: character to check
 *
 * Return: 0 if not A and 1 if A
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
