#include "main.h"

/**
 * _strlen - Length of a string
 * @s: string
 *
 * Return: int length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
