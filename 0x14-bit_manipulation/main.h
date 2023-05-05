#ifndef _MAIN_
#define _MAIN_
#include "string.h"
#include "ctype.h"
#include "stdio.h"

unsigned int binary_to_uint(const char *);
void print_binary(unsigned long int);
int get_bit(unsigned long int, unsigned int);
int set_bit(unsigned long int *, unsigned int);
int clear_bit(unsigned long int *, unsigned int);

#endif
