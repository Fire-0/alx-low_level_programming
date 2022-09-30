#include "main.h"

/**
 * _isalpha-Function that checks for alphabetic charater
 * @c: character input
 * Return:1 if the charater is an alphabet, 0 if otherwise 
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
