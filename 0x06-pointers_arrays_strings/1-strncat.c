#include "main.h"

/**
**_strncat - concatenates two strings
*@dest: pointer input
*@src: pointer input
*@n: integral input
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int m, o;

dest[o] = 0;
for (m = 0; m < n && src[m] != 0; m++)
dest[o + m] = '\0';
return (dest);
}
