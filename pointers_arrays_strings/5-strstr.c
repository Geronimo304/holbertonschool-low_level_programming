#include "main.h"
#include <string.h>

/**
 * _strstr - Entry Point
 * @haystack: puntero
 * @needle: puntero
 * Return: null
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *aguja = needle;
		char *pajar = haystack;

		while (*pajar == *aguja && *aguja != '\0')
		{
			aguja++;
			pajar++;
		}
		if (*aguja == '\0')
			return (haystack);

		haystack++;
	}
	return (NULL);
}
