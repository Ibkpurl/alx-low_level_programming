#include "main.h"

/**
 * _strcpy - function that copy string pointed to by src
 * to buffer pointed to by dest
 * @src: source to copy
 * @dest: destination of copy
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (*(src + a))
	{
		*(dest + a) = *(src + a);
		a++;
	}
	*(dest + a) = '\0';
	return (dest);
}
