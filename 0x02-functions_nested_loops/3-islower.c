#include "main.h"

/**
 * _islower - checks for a lower case character
 *
 * Description: a function that checks for lowercase character.
 * @c : character to check the case
 *
 * Return: Always 0 or 1 (success)
 *
 */

int _islower(int c)
{
	return (c >= 97 && c <= 122);
}
