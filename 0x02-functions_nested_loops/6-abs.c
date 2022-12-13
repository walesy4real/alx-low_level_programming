#include "main.h"

/**
 * _abs - integer value
 *
 * return: Always 0 (success)
 *
*/

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}

	else
	{
		n *= -1;
		return (n);
	}
}
