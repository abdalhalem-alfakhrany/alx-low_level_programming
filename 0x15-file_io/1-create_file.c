#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, flags, mods;
	ssize_t writen_bytes;

	if (!filename)
		return (0);
	
	flags = O_RDWR | O_CREAT | O_EXCL;
	mods = S_IRUSR | S_IWUSR;

	file_descriptor = open(filename, flags, mods);

	if (file_descriptor == -1)
	{
		if (errno == EEXIST)
			return (truncate(filename, 0));
		return (-1);
	}

	writen_bytes = write(file_descriptor, text_content, strlen(text_content));
	
	if (writen_bytes == -1)
		return (-1);

	return (1);
}
