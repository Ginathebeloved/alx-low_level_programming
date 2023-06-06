#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 *			  of a linked list
 *
 * @head: pointer to the first node of the list
 * @index: the number of the node to get
 *
 * Return: return the nth node of the linked list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	do
	{
		head = head->next;
		i++;
	
	}while (head && i < index);

	return (head);
}
