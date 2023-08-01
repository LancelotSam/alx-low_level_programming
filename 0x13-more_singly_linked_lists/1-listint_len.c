#include "lists.h"
/**
 * listint_len-this is the main function
 *
 * It lists the length of the list
 * @h:this is the pointer to the list
 * Return:size_t length
 */
size_t listint_len(const listint_t *h)
{
	/*int count = 0;*/
	size_t length = 0;
	const listint_t *current;

	current = h;

	while (current != NULL)
	{
		length++;
		current = current->next;
	}
	return (length);
}
