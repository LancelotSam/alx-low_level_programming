#include "main.h"
/**
 * get_bit-this is the main function
 *
 * It retruns the bit value at any index
 * @n:the value
 * @index:the index who bit value is to be returned
 * Return: bit value for index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int size;
	unsigned long int bitmask;

	size = sizeof(unsigned long int) * 8;
	bitmask = 1ul << index;
	/*1 << (size - 1)*/

	if (index >= size)
		return (-1);

	return ((n & bitmask) != 0);
}

