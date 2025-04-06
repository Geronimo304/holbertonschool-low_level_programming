#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Agrega un nuevo nodo al final de una lista
 * @head: Un puntero doble al encabezado de la lista.
 * @n: Valor entero que se agregará en el nuevo nodo.
 * Return: La dirección del nuevo elemento, o NULL si falla.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	new_node->prev = temp;
	temp->next = new_node;

	return (new_node);
}
