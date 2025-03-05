#include "main.h"
#include <stdio.h>
/**
 * _memset - Entry Point
 * @s: el puntero s que apunta a un buffer
 * @b: es lo que voy a almacenar en el puntero s
 * @n: es el limite que le da a s
 * Return: retorna un puntero
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
