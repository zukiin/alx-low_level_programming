#include "lists.h"

/**
  * free_listint2 - frees a list
  * @head: list's head
  */
void free_listint2(listint_t **head)
{
	listint_t *pointer;
	listint_t **t = head;

	if (t != NULL)
	{
		while (*head != NULL)
		{
			pointer = *head;
			free(pointer);
			*head = (*head)->next;
		}
		*t = NULL;
	}
	else
	{
		*t = NULL;
	}
}
