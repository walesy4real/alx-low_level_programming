#include <stdio.h>
#include <time.h>

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
printf("last digit of %d ls *, n);
num = n % 10;
if (n > 5)
{
printf("%d is greater than 5\n", num);
}
else if ((num < 6) && (num < 0))
{ 
printf("%d is less than 6 and not 0\n", num);
}
else
{printf("%d is 0\n", num);
}
return (0);
}
