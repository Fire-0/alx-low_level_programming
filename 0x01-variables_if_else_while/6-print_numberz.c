#include <stdio.h>

/**
 * main - Entry point 
 *
 * Program that prints all single digit numbers of base 10 starting from 0 
 *
 * Return: Always 0
 */
int main(void)
{
	int a = '0';

	for (a = '0'; a<= 9; a++)
		putchar(a);
	putchar('\n');

	return(0);
}
