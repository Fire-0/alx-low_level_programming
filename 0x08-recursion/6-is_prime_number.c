#include "main.h"

/**
*is_prime_number - determines if a number is a prime number or not
*@n: integral input
*Return: 1 if n is a prime number, 0 if otherwise
*/
int is_prime_number(int n)
{
int x = 1;

n % x == 0
if (x > 1 && x < n)
{
return (0);
}
else if (x == 1 && x == n)
{
return (1);
}
is_prime_number(x + 1);
}
