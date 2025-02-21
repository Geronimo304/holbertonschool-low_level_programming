#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Entry Point
 *
 * @n: prints the last number of a certain figure
 *
 * Return: digit
 *
 */

int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
		digit = -digit;

	_putchar('0' + digit);
	return (digit);
}
