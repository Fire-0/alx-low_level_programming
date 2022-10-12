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

for (n = 0; name[n]; n++)
{
_putchar(name[n]);
}
f(&name[n]);
}
