#include "main.h"

/**
 * times_table_Functiom that prints the 9 times table
 *
 * Return:no value
 */
void times_table(void)
{
	int b = 0, c = 0, a;

	while (c < 10)
	{
		a = b * c;
		{
			_putchar(a);
			_putchar(',');
			_putchar(' ');
		}
		b++;
		if (b > 9)
		{
			c++;
			b = 0;
		}
		_putchar('\n');
	}
}

