#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - determines if the value of the random number
 * * generated is positive, zero or negative
 *
 * Return: returns zero ar the end
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n, nLastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	nLastDigit = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, nLastDigit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0", n, nLastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, nLastDigit);
	}
	return (0);
}
