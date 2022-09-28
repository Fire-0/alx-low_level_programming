#include "main.h"

/**
*factorial - calculates the factorial of a number
*@n: integral input
*Return: factorial of integer
*/
int factorial (int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
factorial (n) = n * factorial (n - 1);
}
