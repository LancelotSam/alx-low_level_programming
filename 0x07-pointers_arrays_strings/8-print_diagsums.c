#include "main.h"
#include <stdio.h>
/**
 * print_diagsums-this is the main function
 *
 * It prints the sum of diagonals of a square matrix
 * @a: the size of one diagonal
 * @size: the size of the other diagonal
 * Return:an integer sum
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum_main = 0;
	int sum_opp = 0;

	for (i = 0; i < size; i++)
	{
		sum_main += a[i * size + i];
		sum_opp += a[(1 + i) * size - (1 + i)];
	}
	printf("%d, %d \n", sum_main, sum_opp);
}
