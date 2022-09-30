#include <stdio.h>

/**
*main - prints the result of the multiplication of two numbers
*Return: 0
*/
int main(int argc, char *argv[])
{
int mul;

mul = argv[1] * argv[2];
printf("%d\n", mul);
if (argc < 3)
{
printf("Error");
}
return (0);
}
