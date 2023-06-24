#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main-this is the main function
 *
 * printf: prints numbers 0-100
 * @1-100: integers to be printed
 * Return: 0
 */
int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if (k % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (k % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (k % 3 == 0 && k % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (k == 1)
		{
			printf("%d", k);
			printf(" ");
		}
		else
		{
			printf("%d", k);
			printf(" ");
		}
	}
	{
		printf("\n");
		return (0);
	}
}
