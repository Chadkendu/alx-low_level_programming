#include"main.h"

/**
 * _memset - fills memory with constant byte
 *
 * Description:
 * @sr: pointer to memory area to fill
 * @nb: the number of bytes to fill
 * @by: constant byte
 *
 * Return: a pointer to the memory area (@sr)
 */

char *_memset(char *sr, char by, unsigned int nb)
{
	unsigned int parv;

	for (parv = 0; parv < nb; parv++)
	{
		sr[parv] = by;
	}
	return (sr);
}
