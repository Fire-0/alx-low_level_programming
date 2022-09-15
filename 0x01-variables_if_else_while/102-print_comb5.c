#include <stdio.h>

/**
 * main - Entry point 
 *
 * Program that prints all possible combinations of two two-digit numbers 
 *
 * Return: Always 0 
 */
int main(void)
{
	int w, x, y, z;

	for (w = 0; w< 9; w++)
	{
		for (x = 0; x< 10; x++)
		{
			for (y = 0; y< 10; y++)
			{
				for (z = 0; z< 10; z++)
				{
					if (w'x' != y'z' && w'x' < y'z')
					{
					putchar(w);
					putchar(x);
					putchar(' ');
					putchar(y);
					putchar(z);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');

return (0);
}
