#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Agrega un nuevo nodo al principio de una lista
 * @head: Un puntero doble al encabezado de la lista
 * @n: Valor entero que se agregará en el nuevo nod
 * Return: La dirección del nuevo elemento, o NULL si fall
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
