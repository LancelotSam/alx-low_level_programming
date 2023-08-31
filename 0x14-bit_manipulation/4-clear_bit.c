#include "main.h"
/**
 * clear_bit-this is the main function
 *
 * It clears bit at index by setting it to 0
 * @n:pointer to the n binary
 * @index:index where bit is to be cleared
 * Return: 1 if successful, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;
	unsigned long int size;

	/*need a bitmask with zero at target, other bits 1*/
	bitmask = ~(1ul << index);
	size = sizeof(unsigned long int) * 8;/*accomodates any system*/

	if (index >= size)/*index must be within the ul*/
		return (-1);

	*n = *n & bitmask;

	return (1);
}
