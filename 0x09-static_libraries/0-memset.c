#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to put the constant
 * @b: constatn
 * @n: max bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
