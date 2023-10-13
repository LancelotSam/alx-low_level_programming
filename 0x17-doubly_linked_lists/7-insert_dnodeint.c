#include "lists.h"
/**
 * insert_dnodeint_at_index-this is the main function
 * it inserts a node ata given index
 * @h:pointer to a pointer to the head of the list
 * @idx: the index
 * @n: the data to be added to the new node
 * Return: the address of the new pointer or Null if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *temp2, *new;
/*tmp points to current prev while temp2 points to current next*/
	tmp = *h;
	new->n = n;

	if (idx == 0)/*insert at the beginning*/
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	if (tmp->next == NULL) /*means the end of the list*/
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	temp2 = tmp->next;
	tmp->next = new;
	temp2->prev = new;
	new->next = temp2;
	new->prev = tmp;

	return (new);
}
