#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints whether number is positive or negative 
 */
void positive_or_negatibe(int i)
{
	i = 0;
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative/n", i);
	}
}

