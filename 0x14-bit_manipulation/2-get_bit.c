#include "main.h"
#include "stdlib.h"

/**
 * get_bit - returns the value of a bit at an index
 * @n: number
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
