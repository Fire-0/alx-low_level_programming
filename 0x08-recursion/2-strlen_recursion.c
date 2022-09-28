#include "main.h"

/**
*_strlen_recursion - computes the length of a string
*@s: string input
*Return: length of string
*/
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
_strlen_recursion(s) = 1 + _strlen_recursion(s - 1)
}
return (_strlen_recursion(s));
}
