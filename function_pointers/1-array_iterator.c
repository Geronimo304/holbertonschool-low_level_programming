#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - Entry Point
 * @array: pointer
 * @size: size of variable
 * @action: pointer
 * Return: null
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
