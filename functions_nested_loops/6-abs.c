#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _abs - Entry Point
 *
 * @n: retorna el numero que de
 *
 * Return: The absolute value of n.
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
