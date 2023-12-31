#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of the list_t list.
 *
 * Return: the number of nodes in te list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
