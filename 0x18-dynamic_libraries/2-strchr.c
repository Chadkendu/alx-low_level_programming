#include"main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 *
 * Description:
 * @s: string to check
 * @c: character we're looking for
 *
 * Return:
 * pointer to the first occurance of the character
 * else NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
