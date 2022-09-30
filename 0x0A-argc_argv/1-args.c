#include <stdio.h>

/**
* main -  Print number of arguments
* @argc: argument count
* @argv: array value
* Return: 0
**/
int main(int argc, char *argv[])
{
	*argv = *argv;
	printf("%d\n", argc - 1);
	return (0);
}
