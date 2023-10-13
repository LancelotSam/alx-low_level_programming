#include "lists.h"
/**
 * sum_dlistint-this is the main function
 * it returns teh sum of all data of a linked list
 * @head: this is the head of teh list
 * Return: int sum of all the items of a linked list or ) if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum = head->n; /*access n member not head->next*/
		head = head->next;
		/*sum += head->next;*/
	}
	return (sum);
}
