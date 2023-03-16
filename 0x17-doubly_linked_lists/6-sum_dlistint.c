#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of the linked list.
 *
 * @head: The head of the linked list.
 *
 * Return: The sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
