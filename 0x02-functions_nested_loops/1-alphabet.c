#include "main.h"
/**
 * main-print alphabet in lowercase
 *function:print_alphabet
 * Return: void
 */
void print_alphabet(void)
{
char alp;
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
}
