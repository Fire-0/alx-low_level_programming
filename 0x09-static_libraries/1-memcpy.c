#include "main.h"

/**
*_memcpy - copies memory area
*@dest: pointer memory area is copied to
*@src: pointe memory area is copied from
*@n: number of bytes to be copied from memory area
*Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int m;

for (m = 0; m < n; m++)
{
src[m] = dest[m];
}

return (dest);
}
