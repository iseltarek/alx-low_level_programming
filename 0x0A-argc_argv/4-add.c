#include <stdio.h>
#include <stdlip.h>
/**
 * main - main
 * @argc:int
 * @argv:vector
 * Return:zero
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *c;

	for (i = 1; i < argc; i++)
	{
		for (c = argv[i]; *c; c++)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
