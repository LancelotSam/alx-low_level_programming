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
	unsigned long int bitmask = 1;
	int size = sizeof(unsigned long int) * 8;/*1 << 31 is for a spec systems*/

	bitmask = 1 << (size - 1);/*initialize bitmask to msb*/

	while (bitmask != 0)
	{
		if ((n & bitmask) != 0)/*if bit is set (1) and not clear(0)*/
			_putchar('1');
		else
			_putchar('0');
		bitmask >>= 1;/*move bitmask to next bit*/
	}
	if (n == 0)/*if number is 0*/
		_putchar('0');
	_putchar('\n');
}
