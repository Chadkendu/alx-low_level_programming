#include "main.h"

/**
 * _islower - Entry point
 * Description - Checks if a character is a lower case
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		/*refer to int c*/
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
