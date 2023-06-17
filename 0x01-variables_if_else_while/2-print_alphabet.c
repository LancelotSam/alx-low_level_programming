#include <stdio.h>
/**
 * main-program entry point
 * printing alphabet in lowercase
 *Return: 0 (Success)
 */
int main(void)
{
/* initializing the start of the first variable */
char alphabet;
for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
{
putchar (alphabet);
}
putchar ('/n');
return (0);
}
