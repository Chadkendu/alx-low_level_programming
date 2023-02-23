#include <unistd.h>

/**
 * _putchar - writes a character c to stdout
 *
 * @c : character to print
 *
 * Return: Always 1 (success)
 *
 * On error -1 is returned, and errno is set appropriately
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
