#include <stdio.h>
/*
 * main-create a program that creates a combination of,
 * digits from 0-9
 * Return: 0(Success)
 */
int main(void)
{
/*initialize the main program*/
int i;
for (i = 0; i <= 9; i++)
{/* check if digits are different*/
putchar(i + '0');
putchar(' ');
}
return (0);
}
