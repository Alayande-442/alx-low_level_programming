#include "lists.h"

/**
 * free_listint - free a linked list in alx project
 * @head: listint_t list to be freed in alx project
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
