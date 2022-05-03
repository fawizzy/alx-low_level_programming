#include "main.h"

/**
 * create_file - function that create file
 * @filename: name of the file
 * @@text_content: content of the file
 *
 * Returns: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 0600);
		if (fd == -1)
		{
			return (-1);
		}
		return (1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;

	wr = write(fd, text_content, i);

	if (wr == -1)
		return (-1);

	return (1);
}
