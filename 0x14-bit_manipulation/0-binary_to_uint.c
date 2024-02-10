#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function that converts a
 * binary number to an unsigned int
 * @b: Pointer to the string containing the binary number
 * Return: The converted unsigned integer, or 0 if the
 * input is invalid
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = result * 2 + (*b - '0');
		b++;
	}
	return (result);
}
