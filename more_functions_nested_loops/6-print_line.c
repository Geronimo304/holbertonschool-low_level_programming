#include "main.h"

/**
 * Print_line - Entry Point
 *@n: imprime una linea.
 *
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		
		{
			_putchar ('_');
		}
		_putchar('\n');
	}
}
