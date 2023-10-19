#include "lists.h"

/**
 * print_before - function will be executed before main.
 * Return: void
 */

__attribute__((constructor)) void print_before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
