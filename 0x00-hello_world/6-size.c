#include<stdio.h>
/*
 * main-to determine sizes of ouputs
 * function- use sizeof
 * return: 0 (Success)
*/
int main(void)
/* main function body*/
{
char chartype;
int intType;
long int Longtype;
long long int Llongtype;
float floattype;
/*sizeof evaluates the size of a variable*/
printf("Size of char: %zu byte\n", sizeof(chartype));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floattype));
printf("Size of long int: %zu bytes\n", sizeof(Longtype));
printf("Size of long long int: %zu byte\n", sizeof(Llongtype));
return (0);
}
