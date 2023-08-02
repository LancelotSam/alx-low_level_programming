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
	unsigned int counter;
/* do not modify index even though it is given as 0*/
	counter = 0;
	current = head;

	if (current == NULL)
		return (NULL);
	while (current != NULL)
	{
		if (counter == index)
			return (current);

		current = current->next;
		counter++;
	}
	return (current);
}

