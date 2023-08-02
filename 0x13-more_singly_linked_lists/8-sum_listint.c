#include "lists.h"
/**
 * sum_listint-this is the main function
 *
 * It sums all data in the linked list
 * @head:a pointer to the head of the list
 * Return:an int sum
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	sum = 0;
	current = head;

	if (current == NULL)
		return (0);
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
