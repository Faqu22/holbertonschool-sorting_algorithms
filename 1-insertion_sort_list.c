#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *p, *aux;

	if (!list || !(*list) || !((*list)->next))
		return;

	p = *list;

	while (p != NULL)
	{
		while (p->next && (p->n > p->next->n))
		{
			aux = p->next;
			p->next = aux->next;
			aux->prev = p->prev;

			if (p->prev)
				p->prev->next = aux;

			if (aux->next)
				aux->next->prev = p;

			p->prev = aux;
			aux->next = p;

			if (aux->prev)
			{
				p = aux->prev;
			}
			else
			{
				*list = aux;
			}
			print_list(*list);
		}
		p = p->next;
	}
}
