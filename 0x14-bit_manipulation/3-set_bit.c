#include "main.h"

/**
 * set_bit - given index sets bit to 1
 * @n: pointer
 * @index: bit index set to 1
 *
 * Return: success = 1, failure = -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
