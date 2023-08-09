#include "main.h"
/**
 * *str_concat - function
 * @s1: pointer 1
 * @s2: pointer 2
 * Return: m
*/
char *str_concat(char *s1, char *s2)
{
	int i, size1 = 0, size2 = 0;
	char *m;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	m = malloc((size1 + size2) * sizeof(char) + 1);
	if (m == 0)
		return (0);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			m[i] = s1[i];
		else
			m[i] = s2[i - size1];
	}
	m[i] = '\0';
	return (m);
}
