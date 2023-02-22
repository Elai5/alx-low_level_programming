#include "main.h"
/**
 * _abs - checks for absolute values
 *
 * @a: parameter to be checked
 * Return: 0
*/
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
