#include "main.h"
/**
 *_isalpha - function to check alphabet
 *
 *@c: perimeter checked
 *
 * Return: if is an alphabet
 * and 0 if not
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
