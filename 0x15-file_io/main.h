#ifndef _MAIN_
#define _MAIN_

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "errno.h"
#include "fcntl.h"
#include "unistd.h"
#include "stddef.h"

#define CHECK_FILE_RESULT(expression, file_name) \
    do { \
        if ((expression) == -1) { \
			fprintf(stderr, "file %s error because %d\n", file_name, errno);\
            exit(EXIT_FAILURE); \
        } \
    } while (0)

ssize_t read_textfile(const char *, size_t);
int create_file(const char *, char *);
int append_text_to_file(const char *, char *);

#endif
