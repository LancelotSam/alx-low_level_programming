#include "lists.h"
/**
 * add_dnodeint_end-this is the main function
 * it adds a node at the end of the list
 * @head:a pointe rto a pointer of teh head of the list
 * @n: the size of the new node to be added
 * Return: address of the new node or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_tail, *current;

	new_tail = malloc(sizeof(dlistint_t));
	if (new_tail == NULL)
	{
		return (NULL);
	}
	new_tail->n = n;
	new_tail->next = NULL;
	if (*head == NULL)
	{
		new_tail->prev = NULL;
		*head = new_tail;
		return (new_tail);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_tail;
	new_tail->prev = current;

	return (new_tail);
}
