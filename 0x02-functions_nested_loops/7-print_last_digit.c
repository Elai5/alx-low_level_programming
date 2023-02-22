#include "main.h"
/**
 *print_last_digit - a function that prints the last digit
 *
 *@b: function paramater
 *Return: a
 */
int print_last_digit(int b)
{
	int a;

	a = b % 10;
	if (b < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
