#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list_t list.
 *
 * Return: the number of nodes in te list_t list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		count++;
		cursor = cursor->next;
	}
	return (count);
}
