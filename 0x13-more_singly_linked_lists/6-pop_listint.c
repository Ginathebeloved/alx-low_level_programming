#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 *		 of a linked list
 *
 * @head: pointer to the first node
 *
 * Return: return the head node's data
 *	   return 0 if the linked list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int new_node;

	if (!head || !*head)
		return (0);

	new_node = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (new_node);
}
