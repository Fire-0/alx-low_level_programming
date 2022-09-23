#include "main.h"
#include <stdio.h>

/**
*reverse_array - reverses the content of an array of integers
*@a: pointer input
*@n: integral input
*/
void reverse_array(int *a, int n)
{
int m;

a[n] = '\0';
m = n - 1;
while (m >= 0)
{
if (m != 0)
{
printf(", ");
}
printf("%d", a[m]);
m--;
}
printf("\n");
}
