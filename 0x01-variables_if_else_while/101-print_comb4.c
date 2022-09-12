#include <stdio.h>

/**
 * main - Entry point 
 *
 * Program that prints all possible combinations of three digits
 *
 * Return: Always 0
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x< 8; x++)
	{
		for (y = 0; y< 9; y++)
			{
				for (z = 0; z< 10; z++)
				{
					if (x!= y && x!= z && y!= z && x< y && y< z)
					{
						putchar(x);
						putchar(y);
						putchar(z);
						putchar(',');
						putchar(' ');
					}
				}
			}
	}
	putchar('\n');

	return (0);
}
