#include "main.h"

/**
 * _strlen - print the length of a string
 *
 * Description: a function that returns the length of a string.
 *
 * @s: string variable
 *
 * Return: nothing
 *
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
