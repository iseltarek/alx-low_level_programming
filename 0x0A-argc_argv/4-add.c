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

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
			{
				return (printf("Error\n"), 1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
