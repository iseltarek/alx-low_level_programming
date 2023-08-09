#include "main.h"
/**
 * *_strdup - function
 * @str: pointer
 * Return: m
*/
char *_strdup(char *str)
{
	int s = 0, i;
	char *m;
	if (str == NULL)
		return (NULL);
	while (str[s])
		s++;
	m = malloc(s * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);
	else
	{
		for (i = 0; i < s; i++)
			m[i] = str[i];
	}
	return (m);
}
