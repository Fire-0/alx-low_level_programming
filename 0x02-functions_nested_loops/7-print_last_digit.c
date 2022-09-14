#include "main.h"

/**
 * print_last_digit-Function that prints last digit of a number
 * @n: integral input 
 * Return:Always 0.
 */
int print_last_digit(int n)
	{
		if (n >= 0)
		{
			n = n % 10;
			_putchar(n);
		}
		else if (n <0)
		{
			n = ((-1) * n) % 10;
			_putchar(n);
		}
		return (n);
	}

