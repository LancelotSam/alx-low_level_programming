#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main-this is the main function
 *@argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result = 1;
	int z = 0;
	char E[] = "Error";

	int i, j;

	printf("Enter two numbers:");

	if (scanf("%d %d", &i, &j) != 2)
	{
		printf("%s\n", E);
		return (1);
	}
	for (z = 1; z < argc; z++)/*start from 1 since 0 is the name of program*/
	{/* k * arvg[1] is wrong, integer vs pointer*/
		result *= strtol(argv[z], NULL, 10);
	}
	printf("%d\n", result);
	return (0);
}
