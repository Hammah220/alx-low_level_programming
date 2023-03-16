#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a linked list.
 *
 * @head: The head of the linked list.
 * @index: The index of the returned node.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
