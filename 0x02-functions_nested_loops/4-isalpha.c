#include "main.h"
/**

 * _isalpha - checks for alphabetic character

 * @c: the character to be checked

 * Return: 1 if c is a letter, 0 otherwise

*/
int _isalpha(int r)
{


	if ((r >= 'a' && r <= 'z') || (r >= 'A' && r <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
