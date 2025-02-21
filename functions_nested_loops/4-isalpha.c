#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isalpha - Entry Point
 *
 * @c: uppercase or lowercase letter returns 1, otherwise it is none 0.
 *
 * Return: 0 Always
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
