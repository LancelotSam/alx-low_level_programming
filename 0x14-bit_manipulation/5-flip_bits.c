#include "main.h"
/**
 * flip_bits-this is the main function
 *
 * It flips bits to get a number from another
 * @n: the initial number
 * @m:the number with flipped bits
 * Return: bits needed to flip the number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int size;
	unsigned long int bitmask;
	unsigned long counter = 0;

	size = sizeof(unsigned long int) * 8;
	bitmask = 1ul << (size - 1);/*initialize bitmask to msb*/

	while (bitmask != 0)
	{
		if ((n & bitmask) != (m & bitmask))/*same bitmask to show differing bits*/
			counter++;
		bitmask = bitmask >> 1;/*move to next bit*/
	}
	return (counter);
}
