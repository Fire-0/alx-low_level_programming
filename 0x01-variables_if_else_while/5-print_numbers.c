#include <stdio.h>

/**
 * main - Entry point 
 *
 * Program that prints all single numbers of base 10 starting from 0
 *
 * Return: Always 0
 */
int main(void)
{
	int a = '0';
	while(a<10)
	{
		printf("%d\n", a);
		a++;
	}

	return (0);
}
