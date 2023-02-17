#include <stdio.h>
/**
 * main - print lowercase in reverse
 * Return: zero
*/
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);
	putchar('\n');
	return (0);
}
