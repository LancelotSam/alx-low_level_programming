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
for (alp = 'aA' ; alp <= 'zZ' ; alp++)
{
putchar (alp);
}
putchar('\n');
return (0);
}
