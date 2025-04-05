#include "lists.h"

/**
 * list_len - Devuelve el número d en una lista enlazada tipo list_t.
 * @h: Puntero al inicio de la lista.
 *
 * Return: El número de elementos en la lista.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return count;
}
