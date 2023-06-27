#include "main.h"
/**
 * _strlen-this is the main function
 *
 * Returns the length of a string
 * @s: the character to be printed as a length
 * Return: the integer length
 */
int _strlen(char *s)
{
	int length = 0;/*initialzizing the value of the string*/

	while (s[length] >= 1)/* while the value is above 0*/
	{
		length++;
	}
	return (length);
}



