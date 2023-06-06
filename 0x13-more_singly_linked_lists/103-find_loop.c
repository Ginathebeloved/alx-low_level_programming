#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 *
 * @head: pointer to the first node of the linked list
 *
 * Return: return the address of the node where the loop starts
 *	   return NULL if there is no loop
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node1, *b;

	if (head == NULL)
		return (NULL);
	node1 = b = head;
	while (b->next && (b->next)->next)
	{
		node1 = node1->next;
		b = (b->next)->next;
		if (node1 == b)
		{
			node1 = head;
			while (node1 != b)
			{
				node1 = node1->next;
				b = b->next;
			}
			return (b);
		}
	}
	return (NULL);
}
