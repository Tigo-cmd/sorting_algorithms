#include "sort.h"
/**
* insertion_sort_list -  sorts a doubly linked list of integers
* in ascending order using the Insertion sort algorithm
* @list: Double linked list to sort
* Return: nothing
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *norm, *bef, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}
	norm = (*list)->next;
	while (norm)
	{
		bef =  norm->prev;
		tmp = norm;
		while (bef && bef->n > tmp->n)
		{
			if (bef->prev != NULL)
			{
				bef->prev->next = tmp;
			}
			if (tmp->next != NULL)
				tmp->next->prev = bef;
			bef->next = tmp->next;
			tmp->prev = bef->prev;
			tmp->next = bef;
			bef->prev = tmp;
			if (tmp->prev == NULL)
				*list = tmp;
			print_list((const listint_t *)*list);
			bef = tmp->prev;
		}
		norm = norm->next;
	}
}
