#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Imprime todos los elementos de una lista tipo dlistint_t.
 * @h: Puntero al nodo cabeza de la lista doblemente enlazada.
 * Return: El número de nodos en la lista.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
