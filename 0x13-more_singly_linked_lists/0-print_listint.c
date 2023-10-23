#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list_t list.
 *
 * Return: the number of nodes in te list_t list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *stan = h;
	size_t count = 0;

	while (stan != NULL)
	{
		printf("%d\n", stan->n);
		count++;
		stan = stan->next;
	}
	return (count);
}
