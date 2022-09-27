#include "main.h"

/**
*_strchr - finds the first occurrence of a character in a string
*@s: string input
*@c: character input
*Return: pointer to first occurrence of c
*/
char *_strchr(char *s, char c)
{
int n;

for (n = 0; s[n] != c; n++)
if (s[n] == c)
{
return (s);
}
return ('\n');
}
