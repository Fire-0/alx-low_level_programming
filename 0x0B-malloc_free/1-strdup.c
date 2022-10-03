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

str = malloc(sizeof(char) * n);
if (str == NULL)
{
return (NULL);
}
return (str);
free(str);
}
