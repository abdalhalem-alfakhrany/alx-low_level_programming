#include "main.h"
#include "stdio.h"

int _is_palindrome_recursive(char *first, char *last)
{
	if (*last == '\0')
		_is_palindrome_recursive(first, last);
	
	_is_palindrome_recursive(first, ++last);
	printf("%c \n", *last);
}
int is_palindrome(char *s)
{
	_is_palindrome_recursive(s, s);
}
