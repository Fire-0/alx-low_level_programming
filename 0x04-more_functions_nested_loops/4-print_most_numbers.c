#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4, followed by a new line 
 */
void print_most_numbers(void)
{
	char n;

	n = 0;
	for (n = '0'; n <= '9'; n++)
	{
		if ((2 != '2') && (n != 4))
		{
			_putchar(n);
		}
	_putchar('\n');
	}
}

