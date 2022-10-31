#include "main.h"
#include <stddef.h>

/**
 * read_textfile - function that read a text file and print 
 it to the standard output
 * @filename: name of the file
 * @letters:  number of letters to be printed
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, nm_read, rite;
	char *buffer;

	buffer = malloc(sizeof(*buffer) * (letters + 1));
	if (filename == NULL || buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	nm_read = read(file, buffer, letters);
	if (nm_read == -1)
		return (0);
	buffer[nm_read] = '\0';
	rite = write(STDOUT_FILENO, buffer, nm_read);
	if (rite != nm_read)
		return (0);
	free(buffer);
	close(file);
	return (nm_read);
}
