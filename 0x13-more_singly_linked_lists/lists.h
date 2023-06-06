#ifndef _LINKED_LIST
#define _LINKED_LIST

/**
 * struct listint_s - singly linked list
 * @n: an interger
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for alx project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


size_t print_listint(const listint_t *h);

#endif
