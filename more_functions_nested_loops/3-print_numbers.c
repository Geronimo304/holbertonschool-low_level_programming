#include "main.h"

/**
 * print_numbers - Entry Point
 *
 */
void print_numbers(void)
{
	char numbers[] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
		_putchar(numbers[i]);

	_putchar('\n');
}
