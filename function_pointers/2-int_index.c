#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * int_index - Entry Point
 * @array: pointer
 * @size: size of variable
 * @cmp: pointer
 * Return: retorna
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
