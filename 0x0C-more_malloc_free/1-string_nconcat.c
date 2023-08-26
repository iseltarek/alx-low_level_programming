#include "main.h"

/**
 * *string_nconcat - func
 * @s1: para
 * @s2: para
 * @n: para
 * Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, s_l1, s_l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s_l1 = 0; s1[s_l1] != '\0';  s_l1++)
		;
	for (s_l2 = 0; s2[s_l2] != '\0'; s_l2++)
		;
	s = malloc(s_l1 + n + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
