#include <stdio.h>
#include "main.h"

/**
*_strlen - returns the length of a string
*@s: pointer input
*Return: length of a string
*/
int _strlen(char *s)
{
int l, m = 0;

for (l = 0; s[l] != '\0'; l++)
{
m++;
}
return (m);
}
