#include <stdio.h>

/**
 * main - Entry point 
 *
 * Program that prints the alphabet in lowercase except q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';
	for (ch = 'a'; ch<= 'z'; ch++)
		if (ch!= 'e' && ch!= 'q')
			putchar(ch);
	putchar('\n');

	return (0);
}
