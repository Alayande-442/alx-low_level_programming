#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list in alx project
 * @head: first node in the linked list in alx project
 * @index: return node if success
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int w = 0;
	listint_t *temp = head;

	while (temp && w < index)
	{
		temp = temp->next;
		w++;
	}

	return (temp ? temp : NULL);
}
