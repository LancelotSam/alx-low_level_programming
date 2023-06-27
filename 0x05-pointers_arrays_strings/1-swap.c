#include "main.h"
/**
 *swap_int- this is the main function
 *
 * it swaps the values of two integers
 * @a: the integer to be swapped
 * @b:integer to be swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int m = *a;
	*a = *b;
	*b = m;
}
