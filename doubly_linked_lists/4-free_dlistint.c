#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Libera una lista doblemente enlazada tipo dlistint_t.
 * @head: Puntero al nodo cabeza de la lista.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
