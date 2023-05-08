#include "main.h"

int main(int argc, char **argv)
{
	int to_file_descriptor, from_file_descriptor, append_result = 0;
	ssize_t readed_length = 0;
	char read_buffer[1024];
	int to_file_mods, to_file_flags;
	int from_file_mods, from_file_flags;

	if (argc < 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		return (97);
	}

	from_file_flags = O_RDONLY;
	from_file_mods = S_IRUSR;
	from_file_descriptor = open(argv[1], from_file_flags, from_file_mods);
	if (from_file_descriptor == -1)
	{
		if (errno == EACCES || errno == ENOENT)
		{
			fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
			return (98);
		}
	}
	to_file_flags = O_RDWR | O_CREAT | O_EXCL | O_APPEND;
	to_file_mods = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	to_file_descriptor = open(argv[2], to_file_flags, to_file_mods);
	if (to_file_descriptor == -1)
	{
		if (errno == EEXIST)
		{
			write(to_file_descriptor, "", 0);
		}
		else
		{
			fprintf(stderr, "Error: Can't write to file %s\n", argv[1]);
			return (98);
		}
	}

	do {
		readed_length = pread(from_file_descriptor, read_buffer, 1024, readed_length);
		printf("readed %s %ld\n", read_buffer, readed_length);
		CHECK_FILE_RESULT(readed_length, argv[1]);

		append_result = write(to_file_descriptor, read_buffer, readed_length);
		CHECK_FILE_RESULT(append_result, argv[2]);
	} while (readed_length > 0);

	close(to_file_descriptor);
	close(from_file_descriptor);

	return (0);
}
