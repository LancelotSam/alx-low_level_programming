#include "main.h"
#include <stdio.h>
/**
 * main-this is the main function
 *
 * It prints the name of the program
 * @argc: the number of arguments
 * @argv: the vector array of the commands to be used
 * Return: 0 if program runs successfully
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);

	return (0);
}
