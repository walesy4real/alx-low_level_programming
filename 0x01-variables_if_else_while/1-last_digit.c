#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
 * main - main function should generate a random number
 *
 * Return : Always 0 (Success)
 *
 *
 *
 */

int main(void)

{

	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (n > 5)
	{
	printf("last digit of %d is %d is greater than 5\n", n, a);
	}
	else if (a == 0)
		{
printf("last digit of %d is %d is 0\n", n, a);
}
else
{
printf("%d is less than 6 and not 0\n", n, a);
}
return (0);
}
