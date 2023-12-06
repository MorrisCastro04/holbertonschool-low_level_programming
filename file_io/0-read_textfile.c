#include "main.h"
/**
 * read_textfile - read a text file and print it
 * @filename: pointer to the string to print
 * @letters: number of byter to print
 * Return: Return the actual number of bytes that can print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buffer;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (fd == -1 || r == -1 || w == -1)
		return (0);
	close(fd);
	return (w);
}
