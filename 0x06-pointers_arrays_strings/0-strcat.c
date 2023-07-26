#include "main.h"
/**
 * *_strcat - over write a string
 *
 * @dest:pointer 1
 * @src:pointer 2
 *
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int cnt = 0, i;

	while (dest[cnt])
		cnt++;
	for (i = 0; src[i] ; i++)
		dest[cnt++] = src[i];
	return (dest);
}
