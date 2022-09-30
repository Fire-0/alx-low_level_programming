#include "main.h"

/**
*_atoi - converts string to integer
*@s: string input
*Return: integer value of string
*/
int _atoi(char *s)
{
int c, o, r, n;

if (s[0] == '\0')
{
r = -1;
}
if (r == -1)
{
o = 1;
}
else
{
o = 0;
}

n = 0;

for (c = o; s[c] != '\0'; c++)
{
n = n * 10 + s[c] - '0';
}
if (r == -1)
{
n = -n;
}
return (n);
}
