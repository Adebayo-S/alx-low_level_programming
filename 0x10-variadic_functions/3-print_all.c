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
	unsigned int i = 0, j, n = 0;
	char *str;
	const char t_arg[] = "cifs";

	n = 0;
	while (format[n] != '\0')
	{
		if (format[n] == 'c' || format[n] == 'i' || format[n] == 'f' ||
		format[n] == 's')
			n++;
	}

	va_start(list, format);
	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
		case 'i':
			printf("%d", va_arg(list, int));
		case 'f':
			printf("%f", va_arg(list, double));
		case 's':
			str = va_arg(list, char *);
			if (!str)
			{
				printf("(nil)");
			}
			printf("%s", str);
		}
		if (i < n - 1)
			{
				printf(", ");
				break;
			}
		i++;
	}
	printf("\n"), va_end(list);
}
