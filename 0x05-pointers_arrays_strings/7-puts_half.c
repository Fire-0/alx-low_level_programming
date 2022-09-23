#include <stdio.h>
#include "main.h"

/**
*puts_half - function that prints half of a string
*@str: character input
*/
void puts_half(char *str)
{
int n;
int length_of_the_string;

if (length_of_the_string % 2 == 0)
{
n = length_of_the_string / 2;
}
else if (length_of_the_string % 2 == 1)
{
n = (length_of_the_string - 1) / 2;
}
printf("%c", str[n++]);
n++;
printf("\n");
}
