#include "main.h"

/**
 * _islower- Function that checks for lowercase character 
 * @c: character input
 * Return: 1 if character is lowercase, 0 if otherwise 
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
