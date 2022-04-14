#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b, res;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	res = (*get_op_func(argv[2]))(a, b);

	if (!res || argv[2][1])
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", res);
	return (0);
}
