#include "main.h"
/**
 * get_endianness-this is the main function
 * it gets endiannes
 * Return: int status
 */
int get_endianness(void)
{
	int num = 1;
	char *endian_check = (char *)&num;

	return ((int)endian_check[0]);
}

