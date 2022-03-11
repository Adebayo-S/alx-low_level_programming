#include <stdio.h>
/**
 * main - print alphabet in lowercase, and then uppercase
 * except q and e
 *
 * Return: returns zero ar the end
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
