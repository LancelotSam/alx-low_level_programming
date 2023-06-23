#include "main.h"
/**
 * main-checks if numbers are uppercase
 *Function:_isupper
 *
 *Description: checks if numbers are uppercase
 *@c: alphabet A-Z
 *Return:Returns 1 if c is uppercase,Returns 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
