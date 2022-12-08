#include "lists.h"
#include <stdlib.h>

/**
 * check_cycle - a function in C that checks if a singly linked list
 * has a cycle in it
 *
 * @list: pointer to the first element of the linked list
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *tmp;

	if (list == NULL)
	{
		return (0);
	}
	tmp = list->next;
	while (tmp != NULL)
	{
		if (tmp->next == list)
		{
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}
