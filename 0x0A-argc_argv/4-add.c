#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main-this is the main function
 *
 * It adds two positive numbers
 * @argc: the number of arguments
 * @argv:the array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num1;
	int num2;
	int result;
	char E[] = "Error";

	for (;argc < 3; argc++)
	{/*(argc!=3)(argc < 3) same as (void) argc;*/
		printf("Enter two positive numbers: ");
	}
	if (scanf("%d%d", &num1, &num2) != 2)
	{
		printf("%d\n", 0);
	}
	else if (sizeof(num1) != sizeof(int) || sizeof(num2) != sizeof(int))
	{
		printf("%s/n", E);
		return (1);
	}
	num1 = atoi(argv[1]);
        num2 = atoi(argv[2]);
        result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);

	return (0);
}
