#include "main.h"

/**
*_strpbrk - searches a string for any set of a byte
*@s: main string
*@accept: substring
*Return: pointer to first occurrence of any set of byte of accept in s
*/
char *_strpbrk(char *s, char *accept)
{
int n = 0;

for (; *s != *accept; n++)
if (*s ==*accept)
{
return(s);
}
return('\0');
}
