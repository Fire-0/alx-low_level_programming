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
		_putchar(n % '10');
	}
	else if (n < 0)
	{
		_putchar((n	* '-1') % '10');
	}
	return (0);
}

