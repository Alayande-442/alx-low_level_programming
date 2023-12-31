#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list type listint_t to print
 *
 * Return: success number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t w = 0;

	while (h)
	{
		printf("%d\n", h->n);
		w++;
		h = h->next;
	}

	return (w);
}
