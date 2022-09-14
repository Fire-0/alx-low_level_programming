#include "main.h"
#include <stdlib.h>

/**
 * print_to_98-Function that prints all natural numbers from n to 98
 * @n: integral input 
 * Return: no value
 */
void print_to_98(int n)
{
		if	(n <= 98)
		{
		{
			_putchar(n);
		_putchar(',');
		_putchar(' ');
		n++;
		}
		_putchar('\n');
	}
	else if	(n > 98)
	{
		{
			_putchar(n);
		_putchar(',');
		_putchar(' ');
		n--;
		}
		_putchar('\n');
	}
	else if	(n == 98)
	{
		_putchar(n);
		_putchar('\n');
	}
	return;
}

