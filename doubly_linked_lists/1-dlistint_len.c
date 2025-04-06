#include "lists.h"

/**
 * dlistint_len - Devuelve el número de elementos en una list
 * @h: Puntero al nodo cabeza de la lista doblemente enlazada
 * Return: El número de elementos en la list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
		return (count);
}
