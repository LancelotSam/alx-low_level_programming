#include "main.h"
/**
 * _strlen_recursion-this is the main function
 *
 * It prints the length of a string
 * @s:the string whose length is to be printed
 * Return: string length
 */
int _strlen_recursion(char *s)
{/*int len = _strlen_recursion(s);*/

	if (*s == '\0')/* if the pointed value is non-zero or not ('\0')*/
	{
		return (0);
	}
	return ((1 + _strlen_recursion(s + 1)));
}

#include "main.h"
/**
 * is_palindrome-this is the main function
 *
 * It checks if a string is a palindrome
 * @s:the string to be checked
 * Return:1 if a palindrome, 0 if otherwise
 */
int is_palindrome(char *s)
{
	int i = 0;
	int j = _strlen_recursion(s) -  1;

	if (s == 0)
	{
		return (1);
	}
	if (i >= j)
	{
		return (1);
	}
	if (s[i] == s[j])
	{
		return (is_palindrome(s + 1));
	}
	return (0);
}
