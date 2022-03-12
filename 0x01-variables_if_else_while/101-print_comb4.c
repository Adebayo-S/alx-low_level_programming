#include <stdio.h>
/**
 * main - print possible combo of 3
 *
 * Return: returns zero ar the end
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			for (k = 2; k <= 9; k++)
			{
			if (k > j && j > i)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
					if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
