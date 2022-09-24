#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
*puts_half - prints half of a string, followed by a new line
*@str: pointer input
*/
void puts_half(char *str)
{
int l, n = 0;
l = _strlen(str);
if (l % 2 == 0)
{
n = l / 2;
for ( ; n <= l; n++)
{
printf("%c", str[n]);
}
}
else
{
n = (l - 1) / 2;
for (n += 1; n <= l; n++)
{
printf ("%c", str[n]);
}
}
printf("\n");
}
