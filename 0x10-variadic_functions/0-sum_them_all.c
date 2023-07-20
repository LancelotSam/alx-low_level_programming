#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all-this is the main function
 *
 * It returns the sum of all its parameters.
 * @n: this is the leading argument
 *Return: returns an integer sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum = 0, i = 0;

	va_start(ap, n);/*initialize ap*/
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{/* sum += va_arg(ap, int) equivalent*/
		sum = sum + va_arg(ap, int);/*to access elements of va_arg)*/
	}
	va_end(ap);/*clean up the list*/

	return (sum);
}
