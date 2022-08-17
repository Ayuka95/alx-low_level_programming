#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings followed by a new line
 * Condition: If separator is NULL, it is not printed
 *            If one of the strings is NULL, (nil) is printed
 *
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list alx;
	char *str;
	unsigned int i;

	va_start(alx, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(alx, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(alx);
}
