#include <stdio.h>
#include <stdlib.h>

#include "fcntl.h"
#include "stddef.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "unistd.h"

/**
 * main - Entry point.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or the appropriate exit code on failure.
 */
int main(int argc, char *argv[])
{
	char  line[256];
	char  command[256];
	FILE *fp = popen(command, "r");

	if (argc != 2)
	{
		printf("Usage: %s elf_filename\n", argv[0]);
		return (1);
	}

	snprintf(command, sizeof(command), "readelf -h %s", argv[1]);

	if (fp == NULL)
	{
		printf("Error executing readelf command.\n");
		return (1);
	}

	while (fgets(line, sizeof(line), fp) != NULL)
	{
		if (strstr(line, "Magic:") != NULL ||
		    strstr(line, "Class:") != NULL ||
		    strstr(line, "Data:") != NULL ||
		    strstr(line, "Version:") != NULL ||
		    strstr(line, "OS/ABI:") != NULL ||
		    strstr(line, "ABI Version:") != NULL ||
		    strstr(line, "Type:") != NULL ||
		    strstr(line, "Entry point address:") != NULL)
		{
			printf("%s", line);
		}
	}

	pclose(fp);

	return (0);
}
