#include "lists.h"

/**
 * print_lists - prints all the elements of a linked list
 * @h: liked list of type listit_t to print
 *
 * Return: nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
