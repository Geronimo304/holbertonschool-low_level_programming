#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserta un nuevo nodo en una posición dada.
 * @h: Puntero doble al encabezado de la lista.
 * @idx: Índice donde se debe agregar el nuevo nodo. Comienza en 0.
 * @n: Valor entero que contendrá el nuevo nodo.
 *
 * Return: Dirección del nuevo nodo o NULL si falló.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (!temp)
		return (NULL);

	if (!temp->next)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;


	if (temp->next)
		temp->next->prev = new_node;


	temp->next = new_node;

	return (new_node);
}
