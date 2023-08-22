#include <stdio.h>
/**
  *main - program that computes and prints sum of all multiples of 3 or 5
  *Return: 0.
  */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
}
