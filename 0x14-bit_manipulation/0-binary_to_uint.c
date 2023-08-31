#include "main.h"
/**
 * binary_to_uint-this is the main function
 *
 * It converts binary to an unsigned int
 * @b:pointer to the binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '1')/*if currently pointed is 1*/
			conv = (conv << 1) | 1;/*like multi conv by 2*/
		/* \ 1, is bitwise for mask 0001*/

		else if (*b == '0')/*if currently pointed is 0*/
			conv = (conv << 1);/*a leftshift with no mask*/
		/* or conv <<= 1*/
		else
			return (0);
		b++;
	}
	return (conv);
}
