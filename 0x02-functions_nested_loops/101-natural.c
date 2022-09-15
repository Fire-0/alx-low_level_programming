#include <stdlib.h>
#include <stdio.h>

/**
 * main-Program that prints the sum of natural numbers of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 0, sum;

	for (n = 0; n < 1024; n++)
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum += n;
		}
	printf("%d\n", sum);

	return (0);
}

