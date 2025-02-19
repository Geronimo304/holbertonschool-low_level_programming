#include "main.h"

/**
 *main - Entry Point
 *
 *Return: 0
 */

void print_ab(void)
{
	char ab[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i= 0;

	while (ab[i] != '\0')
	{
		_putchar(ab[i]);
		i++;
	}
}
