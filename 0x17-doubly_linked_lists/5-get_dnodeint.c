#include "lists.h"
/**
 * get_dnodeint_at_index-this is the main function
 * it gets the node at index
 * @head: the pointer to the head of the list
 * @index: the index of interest, starts from 0
 * Return: node or NUll if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head && count < index)
	{
		head = head->next;
		count++;
	}
	return (head);
}
