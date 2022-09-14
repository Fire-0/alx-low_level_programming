#include "main.h"

/**
 * _abs-Function that computes the absolute value of an integer 
 * x: integral input 
 * Return:Absolute value of x
 */
int _abs(int x)
{
	if (x >= 0)
	{
		_putchar(x);
	}
	else if (x < 0)
	{
		x = (-1) * x;
		_putchar(x);
	}

	return (x);
}

