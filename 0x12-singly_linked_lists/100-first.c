#include "lists.h"

/**
 * precede_main - function that prints before main is executed
 */
void precede_main(void) __attribute__((constructor));

void precede_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
