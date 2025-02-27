#include "main.h"
#include <stdio.h>

/**
 * _strlen - Entry Point
 * @s: puntero s
 * Return: i Always
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
	i++;
	s++;
	}
	return (i);
}
