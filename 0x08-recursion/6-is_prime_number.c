#include "main.h"

/**
*is_prime_number - determines if a number is a prime number or not
*@n: integral input
*Return: 1 if n is a prime number, 0 if otherwise
*/
int is_prime_number(int n)
{
int r = 1;

if (n <= 1)
{
return (0);
}
is_prime_number(n) = n % (r + 1);
if (is_prime_number(n) == 0 && r < n)
{
return (0);
}
else
}
return (1);
}
}
