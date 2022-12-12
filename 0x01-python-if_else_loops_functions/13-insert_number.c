#include "lists.h"
#include <stdlib.h>
#include <cstddef.h>

/**
 *
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	current = *head;
	new->n = number;
	while (current != NULL)
	{
		if (new->n > current->n)
		{
			current = current->next;
		}
		else
		{
			new->next = current;
			current->next = new;
		}
	}

	return(new);
}
