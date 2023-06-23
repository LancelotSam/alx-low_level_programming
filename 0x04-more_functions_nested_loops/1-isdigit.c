#include "main.h"
/**
 * _isdigit-this ish the main function
 *
 * It checks for digits
 * @c:digits 0-9
 * Return:1 if output is a digit, otherwise return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
