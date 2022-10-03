#include "main.h"
#include <stdlib.h>

/**
*str_concat - concatenates two strings
*@s1: pointer input
*@s2: pointer input
*Return: pointer to allocated memory space
*/
char *str_concat(char *s1, char *s2)
{
int len = 0;
s1 = strcat(s1, s2);
len = strlen(s1);
s1 = malloc(sizeof(char) * len)
return (s1);
}
