#include <stdio.h>

/**
*main - prints the result of the multiplication of two numbers
*@argc: argument count
*@argv: argument entry
*Return: 0
*/
int main(int argc, char *argv[])
{
printf("%s\n", argv[1] * argv[2]);
if (argc < 3)
{
printf("Error\n");
}
return (0);
}
