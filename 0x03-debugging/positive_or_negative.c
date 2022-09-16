#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints whether number is positive or negative 
 * Return: 0
 */
int main(void)
{
	int n;

	n = 0;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative/n", n);
	}

	return (0);
}

