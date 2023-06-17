#include <stdio.h>
/**
 * main-program entry point
 * printing alphabet in lowercase and reverse
 *Return: 0 (Success)
 */
int main(void)
{
/* initializing the start of the first variable */
int num;
char alp;
for (num = 0; num < 10; num++)
{
putchar ((num % 10) + '0');
}
for (alp = 'a' ; alp <= 'f' ; alp++)
{
putchar (alp);
}
putchar('\n');
return (0);
}
