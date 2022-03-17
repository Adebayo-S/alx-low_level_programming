#include "main.h"

/**
* print_triangle - prints a triangle
* @size: takes in a integer for size of triangle
*/

void print_triangle(int size)
{
	int row, column;

	if (size <= 0)
		_putchar('\n');
	for (column = 0; column < size; column++)
	{
		for (row = 0; row < size; row++)
		{
			if (row >= size - column)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
