#include <stdio.h>
#include <stdlib.h>

/**
 * isInteger - checks input
 * @s: input param
 * Return: 0 or 1
 */

int isInteger(const char *s)
{
	int a = 0;


	while (s[a] != '\0')
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int a = 0, centUsed = 0, cent = 0;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (isInteger(argv[1]))
	{
		a = atoi(argv[1]);
		while (a > 0 && cent <= 4)
		{
			if (a >= cents[cent])
			{
				a -= cents[cent];
				centUsed++;
			}
			else
			{
				cent++;
			}
		}
	}
	printf("%i\n", centUsed);
	return (0);
}
