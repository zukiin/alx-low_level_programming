#include "lists.h"

/**
  * free_listint2 - frees a list
  * @head: list's head
  */
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
	}
	*head = NULL;
}
