#include "main.h"
/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: string to write in the file
 * Return: Return 1 if is successful otherwise -1
*/
int create_file(const char *filename, char *text_content)
{
	int fd, lenght = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		lenght = strlen(text_content);
		write(fd, text_content, lenght);
	}
	close(fd);
	return (1);
}
