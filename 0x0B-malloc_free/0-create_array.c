#include "main.h"
#include <stdlib.h>

/**
*create_array - create an array of chars
*@c: specific char
*@size: integral input
*Return: pointer to string or NULL if size = 0 or program fails
*/
char *create_array(unsigned int size, char c)
{
char *ch;
unsigned int n;

ch = malloc(sizeof(char) * size);
if (size == 0)
{
return (NULL);
}
n = 0;
while (n < size)
{
ch[n] = c;
n++;
}
ch[n] = '\0';
return (ch);
}
