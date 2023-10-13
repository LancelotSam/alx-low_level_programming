#include "lists.h"
/**
 * free_dlistint-this is the main function
 * it frees a dlinked list
 * @head:pointer to the head of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
