#include "lists.h"
/**
 * free_list - fres a list
 * @head: head
 * Return: nothong
*/
void free_list(list_t *head)
{
	list_t *cur_node;

	while ((cur_node = head) != NULL)
	{
		head = head->next;
		free(cur_node->str);
		free(cur_node);
	}
}
