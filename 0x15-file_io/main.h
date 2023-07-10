#ifndef _MAIN_
#define _MAIN_

#include "stddef.h"
#include "stdlib.h"
#include "unistd.h"
#include "fcntl.h"

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
