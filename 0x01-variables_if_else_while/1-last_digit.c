#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	{printf("Last digit of %d is %d", n, n % 10);
	}
	if (n % 10 > 5)
	{printf("Last digit of %d is greater than 5\n", n);
	}
		if (n % 10 == 0)
		{printf("Last digit of %d is 0\n", n);
		}
		if (n < 6 && 0)
		{printf("Last digit of %d is less than 6 and not 0\n", n);
		}
			return (0);
}
