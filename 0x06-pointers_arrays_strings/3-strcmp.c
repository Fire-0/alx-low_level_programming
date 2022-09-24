#include "main.h"
#include <stdio.h>

/**
*_strcmp - compares two strings
*@s1: pointer input
*@s2: pointer input
*Return: difference between first mismatched elements of s1 and s2
*/
int _strcmp(char *s1, char *s2)
{
int n, l = 0;

for (n = 0; s1[n] == s2[n]; n++)
{
l = s1[n] - s2[n];
if (l == 0)
{
return (0);
}
else
{
return (l);
}
}
}
