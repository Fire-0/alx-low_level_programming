#include <stdio.h>
#include "main.h"

/**
**_strcat - contacenates two strings
*@dest: pointer input
*@src: pointer input
*Return: dest
*/
char *_strcat(char *dest, char *src)
{
int l, m, p = 0;

for (l = 0; dest[l] != '\0'; l++)
{
p++;
}
for (m = 0; src[m] != '\0'; m++)
{
dest[p + m] = src[m];
}
dest[p + m] = '\0';
return (dest);
}
