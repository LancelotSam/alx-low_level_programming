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
 * *add_node-this is the main function
 *
 * It adds a new node at the beginning of current
 *@head:pointer to a pointer of list_t
 *@str:a constant pointer
 *Return:list_t(a pointer to new node)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	new_head = malloc(sizeof(list_t));

	if (new_head == NULL)/*evaluate new head and not node contents*/
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}
	/*copy new to avoid unexpted if original str is changed*/
	new_head->str = strdup(str);
	/*check if duplication was successful*/
	if (new_head->str == NULL)
	{
		free(new_head);
		printf("String duplication failed\n");
		return (NULL);
	}
	/*if length of new_head is required,*/
	new_head->len = _strlen(str);
	/*since the initial head was **head, now use *head*/
	new_head->next = *head;/*new node next now points to previous head*/
	*head = new_head; /*make new node the head*/

	return (new_head);
}
