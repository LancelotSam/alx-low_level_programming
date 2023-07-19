#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name-this is the main function
 *
 * It prints a name
 * @name:the name to be printed
 * @f:the pointer to the function
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f == NULL)
		f(name);
}
