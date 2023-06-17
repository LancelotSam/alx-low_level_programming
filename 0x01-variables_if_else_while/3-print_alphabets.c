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
char alb;
alp = 'a';
alb = 'A';
while (alp <= 'z')
{
putchar (alp); alp++;
}
while (alb <= 'Z')
{
putchar (alb); alb++;
}
putchar('\n');
return (0);
}
