#include "main.h"
#include <stdio.h>

/**
*reverse_array - reverses the content of an array of integers
*@a: pointer input
*@n: integral input
*/
void reverse_array(int *a, int n)
{
int temp, m;
while (m < n)
{
temp = a[m];
a[m] = a[n];
a[n] = temp;
if (m != 0)
{
printf(", ");
}
printf("%d", a[m]);
m++;
n--;
}
printf("\n");
}
