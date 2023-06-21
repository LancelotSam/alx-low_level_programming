#include "main.h"
/**
 *main-check is alphabet is lowercase
 *@c:the character to  be checked
 *_islower-check if char is lowercase
 *Return:  if char lowercase, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
