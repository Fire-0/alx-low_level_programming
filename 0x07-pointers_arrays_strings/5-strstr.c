#include "main.h"

/**
*_strstr - function that locates a substring
*@haystack: main string
*@needle: substring
*Return: pointer to first occurrence of substring in main string
*/
char *_strstr(char *haystack, char *needle)
{
int n;

for (n = 0; haystack[n] != *needle; n++)
{
if (haystack[n] == *needle)
{
return (haystack);
}
else
{
return ();
}
}
}
