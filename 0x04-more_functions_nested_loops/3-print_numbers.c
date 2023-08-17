#include "main.h"

/**
  *print numbers - checks for checks for digits (0 to 9)
  *
  *Return: always 0.
  */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}

	_putchar('\n');

}
