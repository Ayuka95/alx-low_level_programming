#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>

/**
 * print_all - function that prints anything
 *
 * @format: format to print a value
 */
void print_all(const char * const format, ...)
{
	va_list alx;
	char *str;
	int i;

	i = 0;
	va_start(alx, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(alx, int));
				break;
			case 'f':
				printf("%f", va_arg(alx, double));
				break;
			case 'c':
				printf("%c", (char) va_arg(alx, int));
				break;
			case 's':
				str = va_arg(alx, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}

