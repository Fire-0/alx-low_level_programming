#include "main.h"

/**
*is_prime_number - determines if a number is a prime number or not
*@n: integral input
*Return: 1 if n is a prime number, 0 if otherwise
*/
int is_prime_number(int n)
{
int x = 1;

if (n <= 1)
{
return (0);
}
else
{
if (n % x == 0 && x != n)
{
return (0);
}
else if (n % x == 0 && x == n)
}
return (1);
}
x++;
is_prime_number(n);
}
