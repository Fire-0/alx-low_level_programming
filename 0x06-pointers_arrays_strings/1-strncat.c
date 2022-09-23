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
int m, l, p = 0;

for (l = 0; dest[l] != '\0'; l++)
{
p++;
}
for (m = 0; m < n && src[m] != 0; m++)
{
dest[p + m] = src[m];
}
dest[p + m] = '\0';
return (dest);
}
