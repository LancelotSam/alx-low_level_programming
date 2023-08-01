#include "lists.h"
/**
 * free_listint2-this is the main function
 * 
 * it frees list and sets head to NULL
 * @head:pointer of a pointer to the the head of the list
 * Return:void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		free(*head);
		(*head) = temp;
	}
	*head = NULL;
	/**
	 * head = (*head)->next;
	 * head->next = NULL;
	 * */
}
