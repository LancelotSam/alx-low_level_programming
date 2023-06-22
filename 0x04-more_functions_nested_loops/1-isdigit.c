#include "main.h"
/**
 * Main-entry point
 * Function:int _isdigit to display digits
 * @char- 'c'
 * Return:1 if output is a digit, otherwise return 0
 */
int _isdigit(int c)/* main function*/
{
	int c;/*our character*/

	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
