#include "main.h"
#include <stdio.h>

/**
 * print_rev - Entry Point
 * @s: pointer that print a string
 */

void print_rev(char *s)
{
	int longt = 0;

	while (s[longt] != '\0')
	{
		longt++;
	}
	while (longt > 0)
	{
		longt--;
		_putchar(s[longt]);
	}
	_putchar('\n');
}
