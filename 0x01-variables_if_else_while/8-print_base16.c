#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int low;
	char test;
	low = 0

	for (test = 'a'; test <= 'f'; test++)
	{
		if ( low < 10)
        {
                putchar(low);
                low++;
        }
		putchar(test);
	putchar('\n');
	return (0);
}
