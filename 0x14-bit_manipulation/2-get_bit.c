#include "main.h"
#include "stdlib.h"


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, len = 0, bin = 1, temp = n;
	unsigned long int *binary;

	while (temp > 1)
	{
		temp /= 2;
		bin *= 2;
		len++;
	}

	binary = malloc(sizeof(unsigned long int) * len);

	temp = n;

	i = 0;
	while (bin > 0)
	{
		binary[i] = (temp / bin);
		temp %= bin;
		bin /= 2;
		i++;
	}

	return (binary[len - index]);
}
