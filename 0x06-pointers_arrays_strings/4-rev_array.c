#include "main.h"
/**
 * reverse_array-this is the main function
 *
 * It reverses an array
 * @a:the array to be reversed
 * @n:the array to be reversed
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;
	int end = n-1;

	for (i = 0; i < n; i++)
	{
		_putchar(&a[i]);
	}
	for(i = 0; i < n/2; i++)
	{
		temp = a[i];
		a[i] = a[end];
		a[end] = temp;
		end--;
	}
}
