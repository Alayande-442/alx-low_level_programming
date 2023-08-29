#include "lists.h"

/**
 * free_listint2 - free a linked list in alx project
 * @head: pointer to the listint_t list to be freed in alx project
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
