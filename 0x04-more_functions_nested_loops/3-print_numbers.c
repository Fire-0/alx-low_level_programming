#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers from 0 to 9, followed by a new line
 */
void print_numbers(void)
{
	char n;

	n = 0;
	for (n = '0'; n <= 9; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

