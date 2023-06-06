#ifndef _LINKED_LIST
#define _LINKED_LIST

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for alx project
 */
typedef struct listint_g
{
	int n;
	struct listint_g *next;
} listint_t;


size_t print_listint(const listint_t *h);

#endif
