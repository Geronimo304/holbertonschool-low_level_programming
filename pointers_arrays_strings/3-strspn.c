#include "main.h"
#include <stdio.h>

/**
 * _strspn - Entry point
 * @s: puntero que contiene ciertos caracteres
 * @accept: puntero que contiene otros caracteres
 * Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, found;

	while (*s)
	{
		found = 0;

		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
			}
		}

		if (found == 0)
		{
			return (count);
		}

		count++;
		s++;
	}
return (count);
}
