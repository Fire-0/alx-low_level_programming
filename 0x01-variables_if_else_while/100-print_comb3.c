#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point 
 *
 * Program that prints all possible different combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int x, y;

	for (x = 0; x< 9; x++)
	{
		for (y = x++; y< 10; y++)
		{
			if (x!= y && x< y)
			{
				putchar(x);
				putchar(y);
				putchar(',');
				putchar(' ');
			}
		}
		}
	putchar('\n');

		return (0);
	}
