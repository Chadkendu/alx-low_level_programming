#include <stdio.h>
#include <unistd.h>

/*
 * main - Entry point
 *
 * Description: 'main is the entry point for all c programs'
 *
 * Return: Always 1 (success)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return(1);	
}
