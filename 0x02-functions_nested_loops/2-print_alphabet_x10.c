#include "main.h"

/**
 * print_alphabet_x10- Function that prints 10 times the alphabet in lowercase
 *
 * Return: 10 times the alphabet in lowercase 
 */
void print_alphabet_x10(void)
{
	int x=0;
	char y='a';
	for (x=0; x<10; x++)
	{
		for (y='a'; y<='z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}

