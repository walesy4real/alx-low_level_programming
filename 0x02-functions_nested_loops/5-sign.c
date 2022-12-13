#include "main.h"

/**
 * print_sign - return 0 not lower while 1 for lower
 *
 * Return: Always 0 (success)
 *
*/
int print_sign(int n)
{
	int test;
	
	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	}
	else
	{
		test = -1;
		_putchar('-');
	}
	return (test);
}
