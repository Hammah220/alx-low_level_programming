#include <stdio.h>

/**
 * main -Prints combination of 2 digits
 *
 * Return: 0
 *
 */

int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens < 10; tens++)
	{
		for (ones = tens + 1; ones <= 9; ones++)
		{
			putchar(tens + '0');
			putchar(ones + '0');
			if (tens < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
