#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file print to the buffer
 * @filename: an input text file.
 * @letters: counts the number of letters.
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fl;
	ssize_t w;
	ssize_t t;

	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fl, buf, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fl);
	return (w);
}

