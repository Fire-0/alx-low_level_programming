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
for (r = 0; str[r] != 0 && r < n; r++)
{
return (str);
}
if (str == NULL)
{
return (NULL);
}
free(str);
}
