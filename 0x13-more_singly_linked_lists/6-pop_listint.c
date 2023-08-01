#include "lists.h"
/**
 * pop_listint-this is the main function
 *
 * It deletes the node head
 * @head:pointer of a pointer to the head of the list
 * Return: int for successful deletion
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	int head_data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	temp = *head;/*store the head in a temp pointer*/
	*head = temp->next;/*head pointer points to the next*/
	head_data = temp->n;
	free(temp);

	return (head_data);
}
