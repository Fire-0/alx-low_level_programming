#include <stdio.h>
#include "main.h"

/**
*print_array - prints n elements of an array of integers
*@a: integral input
*@n: integral input
*/
void print_array(int *a, int n)
{
int m;

*a = a[0];
for (m = 0; m < n; m++)
printf("%d, ", a[m]);
if (m = n - 1)
{
printf("%d", a[m]);
}
printf("\n");
}
