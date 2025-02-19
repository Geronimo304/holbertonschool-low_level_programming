#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry Point
 *
 * Description: print the alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	char letter;
	int n = 0;

	while (n < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

	_putchar('\n');
	n++;
	}
}
