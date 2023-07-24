#include "main.h"
/**
 * _strlen - show the lenght of string
 *
 * @s: parameter
 *
 * Return: lenght of string
*/

int _strlen(char *s)
{
	int l;

	for (l = 0; *s != '\0'; s++)
		l++;
	return (l);
}
