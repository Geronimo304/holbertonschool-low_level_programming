#include "main.h"

/**
 * _isupper - Entry Point
 * @c: returns 1 if uppercase.
 * Return: 0 Always
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
