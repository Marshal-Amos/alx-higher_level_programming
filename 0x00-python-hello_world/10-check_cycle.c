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
	listint_t *tmp, *tmp2;

	if (list == NULL)
	{
		return (0);
	}
	tmp = list->next;
	while (tmp != NULL)
	{
		for (tmp2 = tmp->next; tmp2 != NULL; tmp2 = tmp2->next)
		{
			if (tmp->next == list || tmp2 == tmp)
			{
				return (1);
			}
			if (tmp2 == NULL)
			{
				return (0);
			}
		}
		tmp = tmp->next;
	}
	return (0);
}
