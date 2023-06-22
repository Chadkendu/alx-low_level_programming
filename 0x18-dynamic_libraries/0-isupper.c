#include "main.h"

/**
 * _isupper - check uppercase
 *
 * Description:
 * @charc: character to be checked
 * Return: 1 if upper, 0 otherwise
 */

int _isupper(int charc)
{
	if (charc >= 'A' && charc <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

