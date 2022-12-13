#include "main.h"

/**
 * print_last_digit.c - prints
 *
 * return: value of last digs
 */

int print_last_digit(int n)

{
	int last_digit = n % 19;

	if (last_digit < 0)
	last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
