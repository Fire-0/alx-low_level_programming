#include "main.h"

/**
*_puts_recursion - prints a string followed by a new line
*@s: pointer input
*Return: nothing
*/
void _puts_recursion(char *s)
{
int n, m = 0;

if (s[m] == '\0' && m < n)
{
_putchar('\n');
}
_putchar(s[m]);
_puts_recursion(s[m +1]);
}
