#include <stdio.h>

/**
*main - prints the sum of positive numbers
*Return: 0
*/
int main(int argc, char *argv[])
{
int add, n;

for (n = 1; n < argc; n++)
{
add += argv[n];
printf("%d\n", add);
if (argc < 2)
{
printf("0");
}
if (!(argv[n] <= 0 && arg[n] >= 0))
{
return (1);
}
}
return (0);
}
