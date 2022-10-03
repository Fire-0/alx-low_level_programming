#include "main.h"
#include <stdlib.h>
#include "_putchar.c"

/**
*_strdup - returns pointer to newly allocated space in memory
*@str: pointer input
*Return: pointer to allocated memory or NULL if str = NULL
*/
char *_strdup(char *str)
{
unsigned int n;
unsigned int r;

n = 0;
str = malloc(sizeof(char) * n);
if (str == NULL)
{
return (NULL);
}
r = 0;
while (r < n)
{
_putchar(str[r]);
r++;
}
str[r] = '\0';
return (str);
if (r >= n)
{
return (NULL);
}
free(str);
}
