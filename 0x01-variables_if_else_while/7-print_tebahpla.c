#include <stdio.h>
/**
 * main-program entry point
 * printing alphabet in lowercase and reverse
 *Return: 0 (Success)
 */
int main(void)
{
/* initializing the start of the first variable */
char alp;
for (alp = 'z' ; alp >= 'a' ; alp--)
{
putchar (alp);
}
putchar('\n');
return (0);
}
