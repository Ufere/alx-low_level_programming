#include "lists.h"

/**
* list_len - function that returns the number of elements
*  in a linked list_t list.
* @h: pointer to head node
* Return: The number of element in a linked list
*/

size_t list_len(const list_t *h)
{
	size_t node_num;

	node_num = 0;

	while (h)
	{
		node_num++;
		h = h->next;
	}
	return (node_num);
}
