#include "main.h"
#include <stdio.h>
/**
 * main-this is the main function
 *
 * It prints all arguments received
 * @argc:the number of arguments received
 * @argv: the pointer to the arguments received
 * Return: 0
 */
int main(int argc, char *argv[])/* or **argv*/
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
