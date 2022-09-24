#include "main.h"
#include <stdio.h>

/**
**string_toupper - changes all lowercase letters of a string to uppercase
*@a: pointer input
*Return: pointer
*/
char *string_toupper(char *a)
{
int n;

for (n = 0; a[n] != '\0'; n++)
{
if (a[n] >= 'a' && a[n] <= 'z')
{
a[n] = a[n] - 32;
}
}
a[n] = '\0';
return (a);
}
