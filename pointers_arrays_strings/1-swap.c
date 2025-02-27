#include "main.h"
#include <stdio.h>

/**
 * swap_int - Entry Point
 * @a: puntero a
 * @b: puntero b
 */

void swap_int(int *a, int *b)
{
	int ados;

	ados = *a;

	*a = *b;
	*b = ados;
}
