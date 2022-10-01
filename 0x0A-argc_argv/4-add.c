#include <stdio.h>

/**
*main - prints the sum of positive numbers
*@argc: argument count
*@argv: argument entry
*Return: 0
*/
int main(int argc, char *argv[])
{
int n;
char *add = 0;

for (n = 1; n < argc; n++)
{
add += argv[n];
printf("%d\n", add);
if (argc < 2)
{
printf("0\n");
}
if (!(argv[n] <= 0 && argv[n] >= 0))
{
return (1);
}
}
return (0);
}
