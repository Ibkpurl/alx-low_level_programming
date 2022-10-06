#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/**
 * _length - get the length of strings
 * @str: string to get length of
 * Return: length of string
 */
int _length(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * check_number - checks if string has only numbers
 * @str: string to check
 * Return: 0 is true 1 if false
 */

int check_number(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (0);
}

/**
 * error_exit - prints error with _putchar
 * and exits with 98
 *
 * Return: Error 98 and exit(98)
 */

int error_exit(void)
{
	char *err;
	int i;

	err = "Error";
	for (i = 0; err[i] != '\0'; i++)
		_putchar(err[i]);
	_putchar('\n');
	exit(98);
}

/**
 * __memset - fills memory with a constant byte
 * @s: input pointer
 * @b: characters to fill/set
 * @n: number of bytes to be filled
 * Return: pointer to the filled memory area
 */
char *__memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * allocmem - function that allocates memory
 * @nmemb: size of array
 * @size: size of each element
 * Return: pointer to new allocated memory
 */
void *allocmem(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, sz;

	if (nmemb == 0 || size == 0)
		return (NULL);

	sz = (nmemb * size);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < sz; i++)
		p[i] = 0;

	return (p);
}
