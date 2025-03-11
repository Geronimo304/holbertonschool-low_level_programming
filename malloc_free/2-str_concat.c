#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Entry Point
 * @s1: pointer
 * @s2: pointer
 * Return: duplicador
 */
char *str_concat(char *s1, char *s2)
{
	char *duplicador;
	int rec1 = 0, i;
	int rec2 = 0, j;

	if (*s1 != '\0')
	{
		for (rec1 = 0; s1[rec1]; rec1++)
		{
		}
	}

	if (*s2 != '\0')
	{
		for (rec2 = 0; s2[rec2]; rec2++)
		{
		}
	}

	duplicador = malloc(sizeof(char) * (rec1 + rec2 + 1));
		if (duplicador == NULL)
		{
			return (NULL);
		}

	for (i = 0; i < rec1; i++)
	{
		duplicador[i] = s1[i];
	}
	for (j = 0; j < rec2; j++, i++)
	{
		duplicador[i] = s2[j];
	}
	duplicador[i] = '\0';

	return (duplicador);
}
