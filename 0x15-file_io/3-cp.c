#include "stddef.h"
#include "stdlib.h"
#include "unistd.h"
#include "fcntl.h"
#include "stdio.h"

#define BUFFER_SIZE 1024

/**
* error_and_exit - Prints an error message and exits with the specified code.
* @code: The exit code.
* @message: The error message to print.
*/
void error_and_exit(int code, const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(code);
}

/**
* main - Entry point.
* @argc: The number of command-line arguments.
* @argv: An array of command-line argument strings.
*
* Return: 0 on success, or the appropriate exit code on failure.
*/
int main(int argc, char **argv)
{
int file_from, file_to, bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

/* Check the number of arguments */
if (argc != 3)
error_and_exit(97, "Usage: cp file_from file_to");

/* Open the source file for reading */
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
error_and_exit(98, "Error: Can't read from file");

/* Open or create the destination file for writing */
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
S_IRGRP | S_IWGRP | S_IROTH);
if (file_to == -1)
error_and_exit(99, "Error: Can't write to file");

/* Read from source file and write to destination file */
while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(file_to, buffer, bytes_read);
if (bytes_written != bytes_read)
error_and_exit(99, "Error: Can't write to file");
}

/* Check for read error */
if (bytes_read == -1)
error_and_exit(98, "Error: Can't read from file");

/* Close the file descriptors */
if (close(file_from) == -1)
error_and_exit(100, "Error: Can't close file descriptor");

if (close(file_to) == -1)
error_and_exit(100, "Error: Can't close file descriptor");

return (0);
}
