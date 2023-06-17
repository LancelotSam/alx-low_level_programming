#include <stdio.h>
/**
 * main-program entry point
 * printing alphabet in lowercase
 *Return: alphabets a-z (Success)
 */
int main(void)
{
for (int x = 'a'; x <= 'Z'; x++) /* using ascii values of aalphabets*/
{
char small = tolower(x);
putchar(small);
}
return (0);
}
