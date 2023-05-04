#include "main.h"

/**
 * get_end - checks the end
 *
 * Return: 0 if large endian, and 1 if small endian
 */

int get_end(void)
{
	unsigned int b = 1;
	char *d = (char *) &b;

	return (*d);
}
