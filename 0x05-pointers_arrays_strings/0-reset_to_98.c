#include "main.h"

/**
*reset_to_98 - updates the value a pointer points to to 98
*@*n: integral input
*/
void reset_to_98(int *n)
{
int p;

n = &p;
*n = 98;
p = *n;
}
