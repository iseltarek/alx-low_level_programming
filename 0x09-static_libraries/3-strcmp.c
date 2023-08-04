#include "main.h"

/**
 * _strcmp - the diffrence between 2 strings
 *
 * @s1:parameter
 * @s2: paramert 2
 * Return: diff
*/
int _strcmp(char *s1, char *s2)
{
	int cnt1 = 0, cnt2 = 0, diff = 0;

	while (s1[cnt1])
		cnt1++;
	while (s2[cnt2])
		cnt2++;
	if (cnt1 > cnt2)
	{
		diff = cnt1 - cnt2;
	}
	else if (cnt1 < cnt2)
	{
		diff = cnt1 - cnt2;
	}
	else
		diff = 0;
	return (diff);
}
