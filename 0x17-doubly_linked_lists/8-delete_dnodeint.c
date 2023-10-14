#include "lists.h"
/**
 * delete_dnodeint_at_index-this is the main function
 * it deletes the node at index
 * @head:this is a pointer to the pointer of teh head of the list
 * @index: where the node is to be deleted
 * Return: 1 if successful, -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	temp = *head;

	if (*head == NULL)
		return (NULL);
	for (; index != 0; index--)
	{
		temp = temp->next;
		if (temp == NULL)/*if end of the list reached*/
			return (-1);
	}
	if (temp == *head)
	{
		*head  = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{


