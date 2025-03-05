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
	unsigned int largo_de_src;
	int i;

	for (largo_de_src = 0; *src; largo_de_src++)
		src++;

	for (i = 0; n < largo_de_src; i++)
	{
		n++;
		src[n] = *dest;
	}
	return (dest);
}
