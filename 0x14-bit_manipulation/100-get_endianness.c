#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 if the system is big-endian and 1 if it is little-endian
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	if (*ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
