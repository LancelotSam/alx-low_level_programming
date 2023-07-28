#include "lists.h"
/**
 * _strlen-this is the main function
 *
 * It calculates the length of a string
 * @str:the string to be evaluated
 * Return: integer length
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *add_node_end-this is the main function
 *
 * It adds a node at the end of a linked list
 * @head:pointer of a pointer to the list
 * @str:a constant string pointer
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail, *current;

	tail = malloc(sizeof(list_t));

	if (tail == NULL)
	{
		printf("Memory allocation failed.\n");
		return (NULL);
	}
	tail->str = strdup(str);/*copy new str*/
	if (tail->str == NULL)/*if copy successful*/
	{
		free(tail);
		printf("Duplication failed.\n");
		return (NULL);
	}

	tail->len = _strlen(str);/*include the length*/
	tail->next = NULL;/*assumes the end of list, so not head*/
	if (*head == NULL)
	{
		*head = tail;/*if empty list*/
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = tail;
	}
	return (tail);
}
