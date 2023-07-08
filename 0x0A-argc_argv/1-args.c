#include "main.h"
#include <stdio.h>
/**
 * main-this is the main function
 *
 * It prints athe arguments passed to the program
 * @argc: the number of arguments to be printed
 * @argv: an array of pointers to the arguments
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	printf("%d\n", --argc);
	argv++;
	return (0);
}
