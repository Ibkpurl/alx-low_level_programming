#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination pointer.
 * @src: source pointer.
 * @n: amount of bytes to be used from src.
 * Return: the pointer to destination.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
		count++;

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
