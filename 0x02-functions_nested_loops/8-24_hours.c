#include "main.h"

/**
 * jack_bauer-Function that prints every minute of the day
 * of Jack Bauer
 * a = hour, b= minutes
 * Return:24 hour clock line by line
 */
void jack_bauer(void)
{
	int a = 0, b = 0, c = 0;

	while (a < 24)
	{
		c++;
		if (c > 59)
		{
			b++;
			c = 0;
		}
		if (b > 59)
		{
			a++;
			c = 0;
		}
		_putchar(a);
		_putchar(':');
		_putchar(b);
		_putchar('\n');
	}
}

