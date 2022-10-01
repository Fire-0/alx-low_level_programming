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
int add;
int a;
int b;

for (n = 1; n < argc; n++)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
add = a + b;
printf("%d\n", add);
if (argc < 2)
{
printf("0\n");
}
if (!(argv <= 0 && argv >= 0))
{
return (1);
}
}
return (0);
}
