#include "main.h"

/**
*is_palindrome - determines if a string is a palindrome
*@s: string input
*Return: 1 if string is a palindrome or is empty, 0 if otherwise
*/
int is_palindrome(char *s)
{
if (*s == '\0')
{
return (1);
}
else
{
if (*s != _print_rev_recursion(s))
{
return (0);
}
is_palindrome(s) = 1 * (is_palindrome(s + 1))
return (1);
}
}
