#include "lists.h"
/**
 * print_list-this is the main function
 *
 * It prints all elements of a singly linked list
 * @h:the pointer to the list
 * Return: size_t which is the size of the list(number of nodes)
 */
size_t print_list(const list_t *h)
{

	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);

		}
		h = h->next;
		nodes++;
	}
	return (nodes);
}

