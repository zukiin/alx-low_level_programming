#include "lists.h"

/**
  * add_nodeint_end - add new node at end of list
  * @head: list head
  * @n: node's value
  * Return: address of new node (success) else NULL
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *pointer = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = NULL;
	}

	if (pointer == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (pointer->next != NULL)
		{
			pointer = pointer->next;
		}
		pointer->next = new_node;
	}
	return (new_node);
}
