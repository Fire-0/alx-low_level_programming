#include <stdio.h>
#include "main.h"

/**
**_strcpy - copies contents of array a pointer points to to another pointer
*@dest: pointer input
*@src: pointer input
*Return: value of dest pointer
*/
char *_strcpy(char *dest, char *src)
{
while (*src != '\0')
*dest = *src;
src++;
return (dest);
}
