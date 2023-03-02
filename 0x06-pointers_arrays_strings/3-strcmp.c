#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equal to eachother,
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, parv = 0;

	while (parv == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		parv = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (parv);
}
