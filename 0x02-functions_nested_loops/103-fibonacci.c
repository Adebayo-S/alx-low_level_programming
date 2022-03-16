#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 * terms not exceeding 4000000.
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long fib, prevFib, prev2Fib;
	float sum;

	while (1)
	{
		fib = prevFib + prev2Fib;

		if (fib > 4000000)
			break;

		if ((fib % 2) == 0)
			sum += fib;
		prev2Fib = prevFib;
		prevFib = fib;

	}

	printf("%.0f\n", sum);

	return (0);
}
