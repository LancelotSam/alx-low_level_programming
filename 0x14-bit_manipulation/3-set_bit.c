#include "main.h"
/**
 * set_bit-this is the main function
 *
 * It sets bit value to 1 at index
 * @n:pointer to the bit
 * @index: where bit is to be set to 1
 * Return: 1 if successful, -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;
	unsigned long int size;

	bitmask = 1ul << index;/*to accomodate data type dont use just 1*/
	size = sizeof(unsigned long int) * 8;

	if (index >= size)/*make sure index is within bounds*/
		return (-1);

	*n = *n | bitmask;/*sets bit at index to 1, using OR*/
	return (1);
}
