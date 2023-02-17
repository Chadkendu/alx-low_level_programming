#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int low;

	for (low = '0'; low <= '9'; low++)
	{
		putchar(low);
	}
	for (low = 'a'; low <= 'f'; low++)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
