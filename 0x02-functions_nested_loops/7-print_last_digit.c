#include "main.h"

/**
 * print_last_digit-Function that prints last digit of a number
 * @n: integral input 
 * Return:value of last digit
 */
int print_last_digit(int n)
	{
		if (n < 0)
		{
			n *= -1;
		}
		return (n % 10);
	}

