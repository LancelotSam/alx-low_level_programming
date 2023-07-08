#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main-this is the main function
 * @i:the first integer
 * @j:the second integer
 * @k: the result of multiplication
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j;
	int k = 1;
	int z = 0;
	char E[] = "Error";

	printf("Enter two numbers: ");
	scanf("%d%d", &i, &j);
	
	if (i == 0 || j == 0)
	{
		printf("%s\n", E);
		return (1);
	}
	for (z = 1; z < argc; z++)/*start from 1 since 0 is the name of program*/
	{/* k * arvg[1] is wrong, integer vs pointer*/
		k = k * strtol(argv[z], NULL, 10 );
	}
	printf("%d\n", k);
	return (0);
}
