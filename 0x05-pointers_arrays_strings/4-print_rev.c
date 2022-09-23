#include <stdio.h>
#include "main.h"

/**
*print_rev - prints a string in reverse, followed by a new line
*@s: pointer input
*/
void print_rev(char *s)
{
int m, n = 0;

s[n] = '\0';
m = n - 1;
while (m >= 0)
{
printf("s[m]");
m--;
}
printf("\n");
}
