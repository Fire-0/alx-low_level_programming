#include <stdio.h>
#include "main.h"

/**
*puts_half - function that prints half of a string
*@str: character input
*/
void puts_half(char *str)
{
int n;
int l;

l = length_of_the_string;
if (l % 2 == 0)
{
n = l / 2;
}
else if (l % 2 == 1)
{
n = (l - 1) / 2;
}
printf("%c", str[n++]);
n++;
printf("\n');
}
