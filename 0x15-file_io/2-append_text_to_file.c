#include "main.h"

/**
 * append_text_to_file - open the file and add text to end of it
 * @filename: the file to be manibulated
 * @text_content: the text to be appende
 * Return: -1 if failer , 1 if Success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, flags, mods;
	ssize_t writen_bytes;

	if (!filename)
		return (-1);

	flags = O_RDWR | O_APPEND;
	mods = 0;

	file_descriptor = open(filename, flags, mods);

	if (file_descriptor == -1)
	{
		if (errno == EACCES)
			return (-1);
		if (errno == ENOENT)
			return (-1);
	}

	writen_bytes = write(file_descriptor, text_content, strlen(text_content));

	if (writen_bytes == -1)
		return (-1);

	return (1);
}
