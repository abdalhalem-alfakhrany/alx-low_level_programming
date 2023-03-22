#include "main.h"
#include "stdio.h"

/**
* times_table - print the times table to 9
* Return: void
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
			{
				printf("%2d", i * j);
				continue;
			}
			printf(", %2d", i * j);
		}
		printf("\n");
	}
}
