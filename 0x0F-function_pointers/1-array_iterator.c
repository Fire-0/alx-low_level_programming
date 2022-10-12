#include "functions_pointers.h"

/**
*array_iterator - executes a function
*function that is given as a parameter on each element of an array
*@array: array input
*@size: size of array
*@action: pointer to function
*Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t n;

if (size != 0)
{
for (n = 0; n < size; n++)
{
return(array[n]);
}
}
action(&array[n]);
}
