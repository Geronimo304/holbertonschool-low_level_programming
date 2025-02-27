#include "main.h"
#include <stdio.h>

/**
 * _puts - Entry Point}
 * @str: pointer that print a string
 */

void _puts(char *str)
{
	while (*str)
	{
	_putchar(*str);
		str++;
	}
	_putchar('\n');
}
