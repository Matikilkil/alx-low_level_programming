#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
  *main - Entry point
  *Description: 'print lowercase and uppercase alphabets'
  *Return: always 0
  */
int main(void)
{
	int n = 97;
	int m = 65;

		while (n <= 122)
		{
			putchar(n);
		}
		while (m <= 90)
		{
			putchar(m);
		}
		putchar('\n');
		return (0);
}
