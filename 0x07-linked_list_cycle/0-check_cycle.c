#include "lists.h"

/**
 * check_cycle - Check if a singly linked list is a cycle
 * @list: The pointer to the list's head
 * Return: 0 if has no cycle, 1 if any other case
 */
int check_cycle(listint_t *list)
{
	listint_t *tortoise, *hare;

	/* If the list is empty isn't a cycle */
	if (list == NULL)
		return (0);
	/* If the list has only one element isn't a cycle */
	if (list->next == NULL)
		return (0);
	/* Initializing pointing to the first and the second */
	tortoise = list;
	hare = list->next;
	/* Loop until find a loop or reach the end */
	do {
		/* Check for the loop */
		if (tortoise == hare)
			return (1);
		/* Move the pointer on position */
		tortoise = tortoise->next;
		/* Move the pointer two positions, if possible */
		if (hare->next != NULL)
			hare = hare->next->next;
		else
			hare = NULL;
	} while (tortoise != NULL && hare != NULL);
	/* If we reach the end on the list isn't a cycle */
	return (0);
}
