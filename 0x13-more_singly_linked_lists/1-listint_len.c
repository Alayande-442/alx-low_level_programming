#include "lists.h"

/**
 * listint_len - return number of element in a linked list
 * @h: linked list of type listint_t to traverse in alx project
 *
 * Return: success number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t w = 0;

	while (h)
	{
		w++;
		h = h->next;
	}

	return (w);
}
