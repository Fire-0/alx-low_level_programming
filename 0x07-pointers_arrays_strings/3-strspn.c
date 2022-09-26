#include "main.h"

/**
*_strspn - gets the length of a prefix substring
*@s: main string
*@accept: substring
*Return: length of substring
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int m, n = 0;

for (m = 0; m < n; m++)
{
if (s[n] == accept[m])
{
return (m);
}
}
}
