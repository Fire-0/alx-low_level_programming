#include <stdio.h>

/**
*main - prints numbers 1 - 100 followed by a new line
*Return: 0
*/
int main(void)
{
int n;

n = 1;
for (n = 1; n < 100; n++)
if (n % 3 == 0 && !(n % 15 == 0))
{
printf("Fizz ");
}
else if (n % 5 == 0 && !(n % 15 == 0))
{
printf("Buzz ");
if (n == 100)
{
printf("Buzz");
}
}
else if (n % 15 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", n);
}
return (0);
}
