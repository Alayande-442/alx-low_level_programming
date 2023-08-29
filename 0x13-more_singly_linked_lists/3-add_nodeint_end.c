#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of linked list
 * @head: pointer to the first element in the lists
 * @n: data to be inserted in the new element
 *
 * Return: success pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int w)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->w = w;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}

