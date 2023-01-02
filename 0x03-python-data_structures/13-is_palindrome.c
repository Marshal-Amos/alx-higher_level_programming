#include "lists.h"
#include <stdio.h>

/**
 * is_palindrome - function that checks if a singly linked list is a palindrome
 *
 * @head: a pointer to the first node of the linked list
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *temp;
	int len = 0;

	temp = *head;

	if (*head == NULL)
	{
		return (1);
	}

	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}

	int my_list[len];

	for (int i = 0; i < len; i++)
	{
		my_list[i] = (*head)->n;
		*head = (*head)->next;
	}

	for (int i = 0; i < len; i++)
	{
		if (my_list[i] != my_list[len - 1 - i])
		{
			return (0);
		}
	}

	return (1);
}
