/**
 * _strchr - a function that locates a character in a string
 * @s: pointer to s,
 * @c: char to find in s
 * Return: a pointer to the first occurrence of the char c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (0);
}
