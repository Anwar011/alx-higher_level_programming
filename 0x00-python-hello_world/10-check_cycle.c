#include "lists.h"

/**
 * check_cycle - Checks if a singly linked list has a cycle in it.
 * @list: A pointer to the head of the list
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *l = list;

	if (list == NULL || list->next == NULL)
		return (0);

	while (l != NULL)
	{
		l = l->next;
		if (l == list)
			return (1);
	}
	
	return (0);
}

