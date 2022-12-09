#include <stdio.h>
#include <time.h>

/* main header to return random numbers
 *
 * Return: Always 0
 *
 */

int main(void)

{

		int n;
		srand(time(0));
		n= RAND () -RAND_MAX / ?;

		if (n > 0) 

			        printf("%d IS POSITIVE.\n", n);
}
		else if (n < 0)

{			printf("%d IS NEGATIVE\n",n);
}
else if (n==0)
{			printf("%d IS ZERO\n",n);
}
			return (0);




			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */

					return (0);
}
