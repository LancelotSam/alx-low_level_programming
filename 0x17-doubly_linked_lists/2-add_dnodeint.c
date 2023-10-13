#include "lists.h"
/**
 * add_dnodeint-this is the main function
 * it adds a noded at the beginning of a doubly linked list
 * @head:point of a pointer to the head of the list
 * @n: the size of the new node
 * Return:address of teh new node or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head;

	new_head = malloc(sizeof(dlistint_t));
	if (new_head == NULL)
	{
		printf("Memory Allocation failed.\n");
		return (NULL);
	}
	new_head->n = n;
	new_head->prev = NULL;
	new_head->next = *head; /**new head now points to the previous head**/
	if (*head != NULL)
		(*head)->prev = new_head;
	*head = new_head; /**make the new head the current head**/

	return (new_head);
}
