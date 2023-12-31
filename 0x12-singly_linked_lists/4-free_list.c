#include "lists.h"
/**
 * free_list-this is the main function
 *
 * It frees a singly linked list
 * @head:pointer to the head of the list
 * Return:void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		/*store next pointer in temp before freeing*/
		temp = head->next;/*temp now points to next*/
		free(head->str);/*the string is allocated memory dynamically*/
		free(head);/*current head is freed*/
		head = temp;/*head now points to temp, if freed, it points to NULL*/
	}
}
