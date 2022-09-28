#include "main.h"

/**
*_strlen_recursion - computes the length of a string
@s: string input
*Return: length of string
*/
int _strlen_recursion(char *s)
{
int n = 0;

if (s[n] == '\0')
{
return (n);
}
return(0);
_strlen_recursion(n + 1);
}
