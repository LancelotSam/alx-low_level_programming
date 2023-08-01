#include "lists.h"
/**
 * *add_nodeint-this is the main function
 *
 * It adds a node at the beginning of the list
 * @head:pointer of a pointer to listint_t
 * @n:an integer data
 * Return: a pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		printf("Memory Allocation Failed.\n");
		return (NULL);
	}
	new_node->n = n;/*sets teh value of new_node to n*/
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
