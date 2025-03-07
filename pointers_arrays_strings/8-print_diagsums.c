#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry Point
 * @a: puntero que contiene el contenido del trabajo
 * @size: memora del puntero
 */
void print_diagsums(int *a, int size)
{
	int suma1, suma2;
	int i;

	for (i = 0; i < size; i++)
	{
		suma1 += a[i * size + i];
		suma2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", suma1, suma2);
}
