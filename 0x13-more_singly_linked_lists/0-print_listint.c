#include "lists.h"
/**
 * print_listint-this is the main function
 *
 * It prints all elements of the lists
 * @h: a pointer to the list
 * Return: int size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t Elements = 0;
	const listint_t *current;

	current = h;/*current now points to the head of Node 1*/

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		Elements++;
	}

	return (Elements);
}
