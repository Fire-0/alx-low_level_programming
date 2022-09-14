#include "main.h"

/**
 * print_alphabet: Function that prints the alphabet in lowercase
 *
 * Return: alphabet in lowercase
 */
void print_alphabet(void)
{
	int c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

