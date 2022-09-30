#include <stdio.h>

/**
*main - prints the result of the multiplication of two numbers
*Return: 0
*/
int main(int argc, char *argv[])
{
int mul ,n;

for (n = 1; n < argc; n++)
{
mul *= argv[n];
printf("%d\n", mul);
if (argc < 3)
{
printf("Error");
}
}
return (0);
}
