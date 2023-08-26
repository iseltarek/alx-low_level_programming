#include "lists.h"
/**
 * list_len - lenght
 * @h: pointer to node
 * Return:size
*/
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
