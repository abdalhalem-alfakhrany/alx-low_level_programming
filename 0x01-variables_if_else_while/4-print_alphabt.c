#include <stdio.h>

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 'q' || i == 'e')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
