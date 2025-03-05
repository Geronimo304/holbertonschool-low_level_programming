#include "main.h"

/**
 * _memcpy - Entry Point
 * @src: puntero en el que debo guardar los datos
 * @dest: puntero dee donde saco los datos
 * @n: es el valor de donde empezara a recorrer el loop
 * Return: el puntero dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
