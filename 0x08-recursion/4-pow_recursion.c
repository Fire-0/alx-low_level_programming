#include "main.h"

/**
*_pow_recursion - calculates the power of a number to another number
*@x: integral input
*@y: power input
*Return: value of x raised to the power of y
*/
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
return (x * _pow_recursion(x, y - 1));
}
