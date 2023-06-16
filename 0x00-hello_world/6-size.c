#include<stdio.h>
/**
 *main-to determine sizes of ouputs
 *function- use sizeof
 *return: 0 (Success)
 *
 */
int main(void)
{
char chartype;
int intType;
long int Longtype;
long long int Llongtype;
float floattype;
/*sizeof evaluates the size of a variable*/
printf("Size of char: %zu bytes\n", sizeof(chartype));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of long int: %zu bytes\n", sizeof(Longtype));
printf("Size of long long int: %zu bytes\n", sizeof(Llongtype));
printf("Size of float: %zu bytes\n", sizeof(floattype));
return (0);
}
