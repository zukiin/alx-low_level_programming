#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: list head
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *pointer = h;
	size_t count = 0;

	while (pointer != NULL)
	{
		printf("%d\n", pointer->n);
		count = count + 1;
		pointer = pointer->next;
	}
	return (count);
}
