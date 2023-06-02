#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - Adds a new node at the beginning of a list
  * @head: The original linked list
  * @str: The string to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (head != NULL && str != NULL)
	{
		node = malloc(sizeof(list_t));
		if (node == NULL)
			return (NULL);

		node->str = strdup(str);
		node->len = _strlen(str);
		node->next = *head;

		*head = node;

		return (node);
	}

	return (0);
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
