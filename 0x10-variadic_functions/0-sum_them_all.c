#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: number of items
 *
 * Return: sum of all its parameters and 0 if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list alx;
	unsigned int i;
	int sum;

	sum = 0;
	va_start(alx, n);
	for (i = 0; i < n; i++)
		sum += va_arg(alx, int);
	va_end(alx);

	return (sum);
}
