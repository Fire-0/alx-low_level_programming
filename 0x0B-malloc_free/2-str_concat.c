#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*str_concat - concatenates two strings
*@s1: pointer input
*@s2: pointer input
*Return: pointer to allocated memory space
*/
char *str_concat(char *s1, char *s2)
{
int len = 0;
char *ptr;

ptr = strcat(s1, s2);
len = strlen(ptr);
ptr = malloc(sizeof(char) * len)
return (ptr);
}
