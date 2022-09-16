#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints ten times the numbers from 0 to 14
 */
void more_numbers(void)
{
	char a = 0, b;

	while(a < 10)
	{
		b = 0;
		while(b <= 14)
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		a++;
	}
}

