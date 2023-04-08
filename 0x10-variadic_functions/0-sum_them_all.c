#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sum of all the parameters
 * @n: total numbers of parameters
 * Return: sum of the value parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (sum);
	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
