#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints the binary representation
 * of a number
 * @n: parameter of type unsigned long int
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	if (!flag)
	{
		_putchar('0');
	}
}
