#include "main.h"

/**
 * _isalpha - Entry Point
 * @c: the integer value it receives
 * Description: checks if alphabet is lowercase or uppercase
 * Return: 1 if true. 0 if false
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
