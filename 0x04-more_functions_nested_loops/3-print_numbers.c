#include "main.h"
/**
  *print numbers - prints the number from 0 to 9
  *
  *Return: always 0 (success)
  */
void print_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
