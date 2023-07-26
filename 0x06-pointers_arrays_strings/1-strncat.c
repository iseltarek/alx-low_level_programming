#include "main.h"
/**
 * _strncat - concatenates 2 strings
 *
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 *
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int cnt = 0, i;

	while (dest[cnt])
		cnt++;
	for (i = 0; i < n && src[i] != '\0'; i++)
	       dest[cnt + i] = src[i];
	dest[c + i] = '\0';
	return (dest);
}
