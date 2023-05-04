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
	listint_t *p;

	if (*head == NULL)
	{
		return (0);
	}
	p = *head;
	head_data = p->n;
	*head = (*head)->next;
	free(p);

	return (head_data);

}
