#include "main.h"

/**
 * mul - multiplies two integers.
 * @a: first number.
 * @b: second number.
 * Return: multiplication.
 */
int mul(int a, int b)
{
	return (a * b);
}

Task 3. 3-print_numbers.c

#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9.
 * Return: no return.
 */
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
