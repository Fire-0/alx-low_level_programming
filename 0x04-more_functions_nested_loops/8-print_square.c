#include "main.h"
#include <stdio.h>

/**
*print_square - prints a square, followed by a new line
*@size: integral input
*/
void print_square(int size)
{
int n;

for (; n == size; n++)
{
for (; size == n; size++)
{
if (size > 0)
{
_putchar(35);
}
else if (size ==0)
{
_putchar('\n');
}
else
{
n = n * -1;
_putchar(35);
}
_putchar('\n');
}
