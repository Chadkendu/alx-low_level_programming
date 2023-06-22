#include "main.h"

/**
 * _strncat - Write a function that concatenates two string
 *
 * Description:
 * @dest: output  dest
 * @src: input src
 * @n: number bytes fro src
 *
 * Return: void return
 */

char *_strncat(char *dest, char *src, int n)
{
	int index, count;

	for (index = 0; dest[index] != '\0'; index++)
		;
	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[index] = src[count];
		index++;
	}
	if (count < n)
	{
	dest[index] = '\0';
	}
	return (dest);
}
