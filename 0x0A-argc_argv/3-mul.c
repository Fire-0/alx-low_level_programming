#include <stdio.h>

/**
*main - prints the result of the multiplication of two numbers
*Return: 0
*/
int main(int argc, char *argv[])
{
printf("%d\n", argv[1] * argv[2]);
if (argc < 3)
{
printf("Error\n");
}
return (0);
}
