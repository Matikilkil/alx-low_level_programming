#include "main.h"

/**
 * get_bit - function that returns the value of a bit at
 * a given index
 * @n: unsigned long integer from which to extract the bit value
 * @index: index of the bit to get, starting from 0
 * Return: value of the bit at the specified index (0 or 1)
 * or -1 if an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	bit_value = (n & mask) ? 1 : 0;
	return (bit_value);
}
