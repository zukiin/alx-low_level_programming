#include "lists.h"

/**
  * pop_listint - deletes the head node of linked list, and returns
  * the head node’s data (n)
  * @head: list's head
  * Return: 0 if list is empty
  */
int pop_listint(listint_t **head)
{
	int head_data;
	listint_t *pop;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		pop = *head;
		head_data = pop->n;
		free(pop);
		*head = (*head)->next;
	}

	return (head_data);

}
