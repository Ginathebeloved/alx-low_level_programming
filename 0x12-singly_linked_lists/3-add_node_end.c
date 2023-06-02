#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_node_end - Adds a new node at the end of a list
  * @head: The original linked list
  * @str: The string to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newlist, *node;

	if (str != NULL)
	{
		newlist = malloc(sizeof(list_t));
		if (newlist == NULL)
			return (NULL);

		newlist->str = strdup(str);
		newlist->len = _strlen(str);
		newlist->next = NULL;

		if (*head == NULL)
		{
			*head  = newlist;
			return (*head);
		}
		else
		{
			node = *head;
			while (node->next)
				node = node->next;

			node->next = newlist;
			return (node);
		}
	}

	return (NULL);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(const char *s)
{
	int g = 0;

	while (*s)
	{
		s++;
		g++;
	}

	return (g);
}
