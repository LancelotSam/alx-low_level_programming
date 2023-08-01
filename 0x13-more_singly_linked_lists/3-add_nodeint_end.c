#include "lists.h"
/**
 * *add_nodeint_end-this is the main function
 *
 * It adds an inter node at the end of a singly linked list
 * @head:pointer of a pointer to the head of the list
 * @n:the input data type
 * Return: node at the end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *end_node;

	end_node = malloc(sizeof(listint_t));

	if (end_node == NULL)
	{
		printf("Memory Allocation failed.\n");
		return (NULL);
	}
	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;/*checks if list is empty*/
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;/*traverse, value of current changes*/
		}
		current->next = end_node;
	}
	return (end_node);
}
