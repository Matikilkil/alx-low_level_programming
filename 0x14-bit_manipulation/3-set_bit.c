#include "main.h"
#include <stddef.h>

/**
 * set_bit - function that sets the value of a bit
 * to 1 at a given index
 * @n: Pointer to the unsigned long integer whose bit value
 * is to be set
 * @index: index of the bit to set, starting from 0
 * Return: 1 if successful, or -1 if an error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (n == NULL)
		return (-1);
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= mask;
	return (1);
}
