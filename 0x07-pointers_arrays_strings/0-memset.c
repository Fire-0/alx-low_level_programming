#include "main.h"
#include "_putchar.c"

/**
*_memset - fills memory with a constant byte
*@s: pointer input
*@b: constant byte input
*@n: bytes of memory area
*Return: pointer to s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;
_putchar(s[i]);
return (s);
}
