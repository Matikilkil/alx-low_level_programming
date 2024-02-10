#include "main.h"
#include <stddef.h>

/**
 * clear_bit - function that sets the value of a bit to
 * 0 at a given index
 * @n: Pointer to the unsigned long integer whose bit
 * value is to be cleared
 * @index: index of the bit to clear, starting from 0
 * Return: 1 if successful, or -1 if an error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1UL << index);

	if (n == NULL)
		return (-1);
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= mask;
	return (1);
}
