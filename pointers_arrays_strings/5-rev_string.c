#include "main.h"
#include <stdio.h>

/**
 * rev_string - Entry Point
 * @s: point
 */

void rev_string(char *s)
{
	int longt = 0;
	char rev;
	int i = 0;

	while (s[longt] != '\0')
	{
		longt++;
	}
	for (i = 0 ; i < longt / 2 ; i++)
	{
		rev = s[i];
		s[i] = s[longt - 1 - i];
		s[longt - 1 - i] = rev;
	}
}
