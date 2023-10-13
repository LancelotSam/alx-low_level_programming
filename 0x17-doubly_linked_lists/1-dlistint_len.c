#include "lists.h"
/**
 * dlistint_len-this is the main function
 * it retruns the number of elements in a dlinked list
 * @h:pointer to the head of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
