#include "main.h"
#include "string.h"

char *leet(char *str)
{
	int i, strLength = strlen(str);
	
	for (i = 0; i < strLength; i++)
	{
		switch(str[i])
		{
			case 'a': str[i] = '4';break;
			case 'A': str[i] = '4';break;
			case 'e': str[i] = '3';break;
			case 'E': str[i] = '3';break;
			case 'o': str[i] = '0';break;
			case 'O': str[i] = '0';break;
			case 't': str[i] = '7';break;
			case 'T': str[i] = '7';break;
			case 'l': str[i] = '1';break;
			case 'L': str[i] = '1';break;
		}
	}
	
	return str; 
}
