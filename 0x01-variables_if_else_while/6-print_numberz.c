#include <stdio.h>
/**
 * main - print single digit numbers starting from 0
 *
 * Return: returns zero ar the end
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
