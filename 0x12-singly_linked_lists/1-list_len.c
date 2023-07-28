#include "lists.h"
/**
 * list_len-this is the main function
 *
 * it lists the length of the list
 * @h:pointer to the list
 * Return: size of the list
 */
size_t list_len(const list_t *h)
{

	unsigned int len = 0;/*defined in header but not initialized*/

	while (h)/*if h is not NULL*/
	{
		len++;
		h = h->next;/*access the next node*/
	}
	return (len);
}
