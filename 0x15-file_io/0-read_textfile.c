#include "main.h"

/**
 * read_textfile - read a text file filename and print it to stdout
 * @filename: the path to file
 * @letters: amout of chars to be read
 * Return: 0 if file , amount of readed letters if Success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *file_content;
	int file_descriptor;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	file_content = malloc(letters * sizeof(char));

	letters = read(file_descriptor, file_content, letters);

	printf("%s", file_content);

	close(file_descriptor);

	return (letters);
}
