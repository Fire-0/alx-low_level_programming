#include "main.h"
#include <stdlib.h>
#include "_strcat.c"
#include "_strlen.c"

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

ptr = _strcat(s1, s2);
len = _strlen(ptr);
ptr = malloc(sizeof(char) * len)
return (ptr);
}
