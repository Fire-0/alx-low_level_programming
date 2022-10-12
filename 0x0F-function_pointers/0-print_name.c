#include "_putchar.c"

/**
*print_name - prints a name
*@name: character pointer
*@f: function pointer
*Return: nothing
*/
void print_name(char *name, void (*f)(char*))
{
unsigned int n;

n = 0;
while (name[n])
{
_putchar(name[n]);
}
n++;
f = &name[n];
}
