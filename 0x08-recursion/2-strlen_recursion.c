#include "main.h"

/**
*_strlen_recursion - computes the length of a string
@s: string input
*Return: length of string
*/
int _strlen_recursion(char *s)
{
int n;

if (*s == '\0')
{
return (1 + _strlen_recursion(s - 1));
}
