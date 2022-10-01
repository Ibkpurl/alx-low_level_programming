/**
 * _memcpy - a function that copies memory area.
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * @n: first n bytes of the memory area
 * Return: *s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
