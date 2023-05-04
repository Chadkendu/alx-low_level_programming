#include "main.h"

/**
 * binStrToUnit - converts a binary number to unsigned integer
 *
 * Description:
 * @binStr: string with the binary number
 *
 * Return: converted number
 */

unsigned int binStrToUnit(const char *binStr)
{
	int b;
	unsigned int decimalVal = 0;

	if (!binaryStr)
		return (0);

	for (b = 0; binaryStr[b]; b++)
	{
		if (binaryStr[b] < '0' || binaryStr[b] > '1')
			return (0);
		decimalVal = 2 * decimalVal + (binaryStr[b] - '0');
	}
	return (decimalVal);
}
