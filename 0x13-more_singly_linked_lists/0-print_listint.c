#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: liked list of type listint_t to print
 *
 * Return: number of nodes
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
