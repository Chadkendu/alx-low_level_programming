#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: The number of bytes to be allocated
 *
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *memry = malloc(b);

	if (memry == NULL)
		exit(98);

	return (memry);
}
