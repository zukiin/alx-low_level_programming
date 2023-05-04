#include "lists.h"

/**
  * listint_len - returns num of elements in list
  * @h: list head
  * Return: num of nodes
  */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	printf("num of elements: %lu\n", n);
	return (n);
}
