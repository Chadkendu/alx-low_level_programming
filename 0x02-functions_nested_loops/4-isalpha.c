#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 *
 * Description: a function that checks for alphabetic character.
 *
 * @c - character to check the case
 *
 * Return: Always 0 or 1 (success)
 *
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
