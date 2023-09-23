#include "main.h"
/**
 * print_binary-this is the main function
 *
 * It prints the binary representation of a number
 * @n:the number  whose binary is to be printed
 * Return:void
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shift;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n, shift = 0; (temp >>= 1) > 0; shift++)
		;

	for (; shift >= 0; shift--)
	{
		if ((n >> shift) & 1)
			printf("1");
		else
			printf("0");
	}
}
