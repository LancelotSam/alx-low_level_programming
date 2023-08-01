#include "lists.h"
/**
 * free_listint-this is the  main function
 *
 * It frees listint
 * @head:pointer to the heade of the list
 * Return:void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}


