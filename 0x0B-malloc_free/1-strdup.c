#include "main.h"
#include <stdlib.h>

/**
*_strdup - returns pointer to newly allocated space in memory
*@str: pointer input
*Return: pointer to allocated memory or NULL if str = NULL
*/
char *_strdup(char *str)
{
unsigned int n;
unsigned int r;

str = malloc(sizeof(char) * n);
if (str == NULL)
{
return (NULL);
}
r = n - 1;
str[r] = '\0';
if (r < n)
{
return (str);
}
else if (r >=n)
{
return (NULL);
}
free (str);
}
