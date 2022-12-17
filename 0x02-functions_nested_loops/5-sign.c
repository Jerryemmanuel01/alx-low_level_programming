#include "main.h"

/**
 * print_sign - prints the sign of the number
 * @n: n is the sign
 * Return: returns 1 if number is greater than 0, 0 if number is 0, -1 if
 * number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if ((n == 0))
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
