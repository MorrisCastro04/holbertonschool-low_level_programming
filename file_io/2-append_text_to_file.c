#include "main.h"
/**
 * append_text_to_file - add a text to the file
 * @filename: name of the file
 * @text_content: string to append
 * Return: Return 1 if is successuful otherwise -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		write(fd, text_content, len);
	}
	close(fd);
	return (1);
}
