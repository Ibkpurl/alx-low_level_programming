/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: source string to search.
 * @accept: substring of accepted chars.
 * Return: the number of bytes in the initial segment.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
