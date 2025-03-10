#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - puntero que te lleva a otro puntero
 * @str: puntero que te lleva al codigo
 * Return: Retorna lo copiado
 */
char *_strdup(char *str)
{
	char *duplicado;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)

	duplicado = malloc((i + 1) * sizeof(char));

		if (duplicado == NULL)
			return (NULL);

	for (j = 0; j <= i; j++)
		duplicado[j] = str[j];

	return (duplicado);
}
