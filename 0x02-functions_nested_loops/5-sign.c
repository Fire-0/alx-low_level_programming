#include "main.h"

/**
 * print_sign-Function that print the sign of a number 
 * @n:integral input
 * Return:1 if n is greater than zero, 0 if n is equal to zero and -1 if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		}
	return (1);
	if (n == 0)
	{
		_putchar(0);
	}
	return (0);
	if (n < 0)
	{
		_putchar('-');
		}
return (-1);
}

