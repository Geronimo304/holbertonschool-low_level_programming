#include "main.h"

/**
 * _strlen_recursion - Entry Point
 * @s: contiene el numero
 * Return: retorna el contador
 */
int _strlen_recursion(char *s)
{
	int i;
	int contador;

	for (i = 0; s[i] != '\0'; i++)
	{
		contador++;
	}
	return (contador);
}
