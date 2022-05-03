#include "main.h"

/**
 * append_text_to_file - append text to the end of a dile
 * @filename: name of the file
 * @text_content: content to add to the end of the file
 *
 * Returns: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY);
		if (fd == -1)
			return (-1);
		else
			return (1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;

	wr = write(fd, text_content, i);
	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
