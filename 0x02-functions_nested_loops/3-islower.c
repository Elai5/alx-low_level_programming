#include "main.h"
/**
 *_isLower - a function to print lowercase
 *
 *@c: parameter to be printed
 *Return: 1 if lowercase
*and 0 id uppercase
*/
int _isLower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
