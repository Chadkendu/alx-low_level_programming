#include "main.h"

/**
 * _strlen - function tha returns the length of a string
 *
 * Description:
 * @s: string to beevaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
