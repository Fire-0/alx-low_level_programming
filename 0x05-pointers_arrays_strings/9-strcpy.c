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
int i = 0;

while (src[i] != '\0')
dest[i] = src[i];
i++
return (dest);
}
