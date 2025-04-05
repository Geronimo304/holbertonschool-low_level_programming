#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Agrega un nuevo nodo al principio de una list_t.
 * @head: Un puntero doble al encabezado de la lista
 * @str: La cadena que se va a duplicar y agregar al nuevo nodo
 * Return: La dirección del nuevo elemento, o NULL si fall
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (!head || !str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
