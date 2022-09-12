#include <stdio.h>

/**
 * main - Entry point 
 *
 * Program that prints all possible combinations of single digit numbers 
 *
 * Return: Always 0
 */
int main(void)
{
	int a = '0';

	for (a = '0'; a<= 9; a++)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
