#include "main.h"
/**
 * main-print alphabet in lowercase
 * Return: 0(success)
 */
void print_alphabet(void);
{
char alp;
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
return (0);
}
