#include "stdio.h"

void the_start(void) __attribute__ ((constructor));

/**
 * the_start - function excute befor the main function start
 */
void the_start(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
