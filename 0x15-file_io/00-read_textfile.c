#include "main.h"

/**
 * read_textfile - fun that reads text file and prints it to standard output
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: leater count value. if file can not be opened/read, nobyte, 0.
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t Fd;
	ssize_t byte_size;
	ssize_t counter;

	Fd = open(filename, O_RDONLY);
	ptr = malloc(sizeof(char) * letters);

	if (ptr == NULL)
	{
		printf("file can not be opened or read\n");
		return (0);
	}
	if (filename == NULL || letters == 0)
	{
		printf("file does not exist\n");
		return (0);
	}
	counter = read(Fd, ptr, letters);

	byte_size = write(STDOUT_FILENO, ptr, counter);

	if (byte_size != counter)
	{
		return (0);
	}
	else 
	free(ptr);
	close(Fd);
	return (byte_size);
}
