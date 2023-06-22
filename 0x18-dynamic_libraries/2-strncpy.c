#include "main.h"
/**
 * _strncpy - function that copies a string, with number of bytes
 *
 * Description:
 * @dest: output dest
 * @src: input source
 * @n: number of bytes to copy
 *
 *Return: string copied  with the number of bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0' ; index++)
	{
		dest[index] = src[index];
	}
	for (; index  < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
