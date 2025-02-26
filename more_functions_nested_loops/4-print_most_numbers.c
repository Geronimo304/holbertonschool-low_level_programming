#include "main.h"

/**
 * print_most_numbers - Entry Point
 *
 */
void print_most_numbers(void)
{
	char numbers[] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
	if (i != 2 && i != 4)
		_putchar(numbers[i] + 0);
	}

	_putchar('\n');
}
