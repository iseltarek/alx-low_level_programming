#include "lists.h"
/**
 * *add_node - lists
 * @head: addres
 * @str: str field
 * Return: size of list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *t;
	int len = 0;

	t = malloc(sizeof(list_t));
	if (t == NULL)
		return (NULL);
	while (str[len])
		len++;
	t->len = len;
	t->str = strdup(str);
	t->next = *head;
	*head = t;
	return (t);
}
