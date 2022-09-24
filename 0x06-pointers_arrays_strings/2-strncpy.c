#include "main.h"
#include <stdio.h>

/**
**_strncpy - copies a string
*@dest: pointer input
*@src: pointer input
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int m;

for (m = 0; m < n && src[m] != '\0'; m++)
{
src[m] = dest[m];
}
dest [m] = '\n';
return (dest);
}
