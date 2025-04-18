#include "lists.h"
#include <stdio.h>

/**
 * print_list - imprime la lista
 * @h: puntero hacia la lista
 * Return: retorna el numero de nodos de la lista
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	return (count);

}
