#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z' ; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z' ; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
