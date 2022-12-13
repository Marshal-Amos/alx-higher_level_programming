#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - a function in C that inserts a number into a
 * sorted singly linked list
 *
 * @head: pointer to the first element of the linked list
 * @number: the integer value of an element in the linked list
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current, *aback;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	current = *head;
	aback = *head;
	new->n = number;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else if (new->n < current->n)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		while (new->n > current->n)
		{
			if (current->next == NULL)
			{
				new->next = NULL;
				current->next = new;
				return (new);
			}
			aback = current;
			current = current->next;
		}
		new->next = aback->next;
		aback->next = new;
	}

	return (new);
}
