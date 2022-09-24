#include "main.h"
#include <stdio.h>

/**
*print_square - prints a square, followed by a new line
*@size: integral input
*/
void print_square(int size)
{
int n = 0;

for (n = 0; n == size; n++)
{
for (size = 1; size == n; size++)
{
_putchar('\#');
}
_putchar('\n');
}
if (size == 0)
{
_putchar('\n');
}
}
