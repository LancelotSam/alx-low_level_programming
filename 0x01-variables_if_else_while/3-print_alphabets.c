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
{
putchar (alp);
}
char alb;
for (alb = 'A' ; alb <= 'Z' ; alb++)
{
putchar (alb);
}
putchar('\n');
return (0);
}
