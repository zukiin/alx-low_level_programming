#include "lists.h"

/**
  * get_nodeint_at_index - returns nth node of list
  * @head: list's head
  * @index: nth node's position
  * Return: NULL if node doesn't exist
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *c = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (c);
		}
		count++;
		c = c->next;
	}
	return (NULL);
}
