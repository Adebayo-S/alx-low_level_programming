#include <stdio.h>
/**
 * main - print alphabet in lowercase, but in reverse
 *
 * Return: returns zero ar the end
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
