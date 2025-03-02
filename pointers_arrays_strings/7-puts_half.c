#include "main.h"

/**
 * puts_half - Entry Point
 * @str: pointer
 */

void puts_half(char *str)
{
	int longt = 0;
	int n;

	while (str[longt] != '\0')
		longt++;

	if (longt % 2 == 0)
		n = longt / 2;

	else
		n = (longt + 1) / 2;


	while (str[n] != '\0')
	{

	_putchar(str[n]);
	n++;
	}
	 _putchar('\n');
}
