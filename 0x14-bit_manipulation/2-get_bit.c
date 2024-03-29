#include "main.h"

/**
 * get_bit - decimal number value returned
 * @n: searched number
 * @index: bit index
 *
 * Return: bit balue
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
