#include <stdio.h>
/**
 * main - main
 * @argc:int
 * @argv:vector
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int pro;

	if (argc == 3)
	{
		pro = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", pro);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
