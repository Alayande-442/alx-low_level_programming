#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head of the list
 * @n: value of the el
 * Return: the address of the new el
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *H;
	dlistint_t *New;

	New = malloc(sizeof(dlistint_t));
	if (New == NULL)
		return (NULL);

	New->n = n;
	New->next = NULL;

	H = *head;

	if (H != NULL)
	{
		while (H->next != NULL)
			H = H->next;
		H->next = New;
	}
	else
	{
		*head = New;
	}

	New->prev = H;
	return (New);
}
