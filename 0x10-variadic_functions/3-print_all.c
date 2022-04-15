#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i, n;
	char *str;

	va_start(list, format);
	i = 0, n = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int)), n++;
			break;
		case 'i':
			printf("%d", va_arg(list, int)), n++;
			break;
		case 'f':
			printf("%f", va_arg(list, double)), n++;
			break;
		case 's':
			str = va_arg(list, char *), n++;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		}
		if (i < n - 1)
			{
				printf(", ");
			}
		i++;
	}
	printf("\n");
	va_end(list);
}
