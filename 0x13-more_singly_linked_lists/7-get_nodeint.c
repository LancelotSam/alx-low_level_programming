#include "lists.h"
/**
 * *get_nodeint_at_index-this is the main function
 *
 * It gets the nth index of the node
 * @head:pointer to the head of the list
 * @index:indext of the node
 * Return: nth index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;

	index = 0;
	current = head;

	if (current == NULL)
		return (NULL);
	while (current->next != NULL)
		current = current->next;
	index++;

	return (current);
}

