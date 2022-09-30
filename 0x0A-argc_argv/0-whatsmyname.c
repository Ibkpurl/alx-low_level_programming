#include "main.h"
#include <stdio.h>

/**
* main -  writes program name
* @argc: argument count
* @argv: argument value
* Return: 0
**/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
