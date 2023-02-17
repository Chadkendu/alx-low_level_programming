#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int low;
	char test;

	for (low = 0; low <= 9; low++)
		putchar(low);
	for (test = 'a'; test <= 'f'; test++)
		putchar(test);
	putchar('\n');
	return (0);
}
