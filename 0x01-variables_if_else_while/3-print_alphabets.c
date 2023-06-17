#include <stdio.h>
/**
 * main-program entry point
 * printing alphabet in lowercase
 *Return: 0 (Success)
 */
int main(void)
{
/* initializing the start of the first variable */
char alp;
for (alp = 'a' ; alp <= 'z' ; alp++)
for (alp = 'A' ; alp <= 'Z' ; alp++)
{
putchar (alp);
}
putchar('\n');
return (0);
}
