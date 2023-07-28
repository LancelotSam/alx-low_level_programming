#include <stdio.h>
/**
 * before_main-this is the function to be printed
 *
 * Printed before main
 * Return:void
 */
void before_main(void) __attribute__((constructor));

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
