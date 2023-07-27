#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main-this is the main function
 *@argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, z = 0;
	char E[] = "Error";
	long int result;

	if (argc != 3)
	{
		printf("%s\n", E);
		return (1);
	}
	i = atoi(argv[1]);/*atoi converts str input to int*/
	j = atoi(argv[2]);
	result = i * j;
	for (z = 2; z < argc; z++)/*start from 1 since 0 is the name of program*/
	{/* k * arvg[1] is wrong, integer vs pointer*/
		/*result *= strtol(argv[z], NULL, 10);*/
		printf("%ld\n", result);
	}
	return (0);
}
