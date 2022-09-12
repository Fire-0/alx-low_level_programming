#include <stdio.h>

/**
 * main - Entry point 
 *
 * Program that prints all the numbers of base 16 in lowercase 
 *
 * Return: Always 0 
 */
int main(void)
{
	int a = '0';

	for (a = '0'; a<= 0x15; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
