#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
int palindrome(char *s, int length);

/**
 *_strlen_recursion - function that obtain the length of the string s
 * @s: input
 * Return: the length of s
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome - checks if s is a palindrome string
 * @s: An input
 * Return: 1 if is string is a palindrome or 0 in otherwise
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);
	if (length <= 1)
		return (1);
	return (palindrome(s, length));
}

/**
 * helper_palindrome - function with a revesed string
 * @s: input
 * @len: the length of the string s
 * Return: A reverse string
 */
int palindrome(char *s, int length)
{
	if (length <= 1)
		return (1);
	else if (*s == *(s + length - 1))
	{
		return (palindrome(s + 1, length - 2));
	}
	else
		return (0);

}
