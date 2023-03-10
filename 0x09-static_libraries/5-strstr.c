#include "main.h"
/**
 * _strstr - locates a substring
 * @haystrack: The string to be searched
 * @needle: The substring to be located
 *
 * Return: If a substring is located - a pointer
 * to the beginning of the located substring
 * If the substring is not located - NULL
 */

char *_strstr(char *haystrack, char *needle)
{
	int index;

	if (*needle == 0)
	{
		return (haystrack);
	}

	while (*haystrack)
	{
		index = 0;

		if (haystrack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystrack);

				index++;

			} while (haystrack[index] == needle[index]);
		}

		haystrack++;
	}

	return ('\0');
}
