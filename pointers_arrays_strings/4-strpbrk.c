#include "main.h"
#include <string.h>

/**
 * _strpbrk - Entry Point
 * @s: puntero
 * @accept: puntero
 * Return: retorna null
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *temp_accept = accept;

		while (*temp_accept)
		{
			if (*s == *temp_accept)
			return (s);
			temp_accept++;
		}
		s++;
	}
	return ('\0');
}
