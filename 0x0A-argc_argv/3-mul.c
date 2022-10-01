#include <stdio.h>

/**
*main - prints the result of the multiplication of two numbers
*@argc: argument count
*@argv: argument entry
*Return: 0
*/
int main(int argc, char *argv[])
{
int n = 1;
char mul = 1;

for (n = 1; n < argc; n++)
{
mul = mul * *argv[n];
printf("%s\n", mul);
if (argc < 3)
{
printf("Error\n");
}
}
return (0);
}
