#include "main.h"

/**
*_puts_recursion - prints a string followed by a new line
*@s: pointer input
*Return: nothing
*/
void _puts_recursion(char *s)
{
int n = 0;

if (s[n] == '\0')
{
_putchar('\n');
}
_putchar(s[n]);
_puts_recursion(s[n + 1]);
}
