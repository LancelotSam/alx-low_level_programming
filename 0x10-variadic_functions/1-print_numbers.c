#include "variadic_functions.h"
/**
 * print_numbers-this is the main function
 *
 * It prints numbers followed by a new line
 * @separator:string printed between numbers
 * @n:the total number of arguments
 * Return:void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	printf("%d", va_arg(ap, int));/*print the first number*/

	while (i < n - 1 && separator != NULL)/*less the first number*/
	{/*accessing the next numbers*/
		printf("%s%d", separator, va_arg(ap, int));
		i++;
	}
	va_end(ap);

	printf("\n");
}
