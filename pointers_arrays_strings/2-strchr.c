#include "main.h"
#include <string.h>

/**
 * _strchr - Entry Point
 * @s: puntero que guarda dentro unos caracteres
 * @c: variable que guarda
 * Return: devuelve el caracter que nos da s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);

	return (NULL);
}
