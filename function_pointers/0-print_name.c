#include "main.h"
#include <stdio.h>
/**
 * print_name - Entry Point
 * @name: pointer
 * @f: pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
