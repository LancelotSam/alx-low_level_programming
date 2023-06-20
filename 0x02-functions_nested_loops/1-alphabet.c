#include <unistd.h>
/**
 * main-print alphabet in lowercase
 * Return: 0(success)
 */
void print_alphabet(void);
int main(void)
{
char c;
for (c = a; c <= z; c++)
{
_putchar(c);
}
_putchar('\n');
return (0);
}
