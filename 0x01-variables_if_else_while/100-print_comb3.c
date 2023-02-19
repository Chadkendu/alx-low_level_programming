#include <stdio.h>
int main(void)
{
	int int1, int2;

	for (int1 = 0; int1 < 10; int1++)
	{
		for (int2 = 0; int2 < 10; int2++)
		{
			putchar((int1 % 10) + '0');
			putchar((int2 % 10) + '0');

			if (int1 == 9 && int2 == 9)
				continue;
			
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
