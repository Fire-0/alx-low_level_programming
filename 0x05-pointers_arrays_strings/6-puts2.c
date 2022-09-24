#include <stdio.h>
#include "main.h"

/**
*puts2 - prints every other character of a string, followed by a new line
*@str: pointer input
*/
void puts2(char *str)
{
int n = 0;
for (n = 0; str[n] != '\0'; n++)
{
if ( n % 2 == 0)
{
printf("%c", str[n]);
}
}
printf("\n");
}
