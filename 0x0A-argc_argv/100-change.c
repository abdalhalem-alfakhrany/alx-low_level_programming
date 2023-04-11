#include "stdio.h"
#include "stdlib.h"
#include "limits.h"

/**
 * minCoins - get the minumn amount of coins
 * @coinList: avilable coins
 * @n: coninsList length
 * @value: the mony value
 * Return: minmum count of coins to get value
 */
int minCoins(int coinList[], int n, long value)
{
	int *coins, i, j;

	coins = malloc((value + 1) * sizeof(int));

	if (value == 0)
		return (0);

	coins[0] = 0;

	for (i = 1; i <= value; i++)
		coins[i] = INT_MAX;

	for (i = 1; i <= value; i++)
	{
		for (j = 0; j < n; j++)
			if (coinList[j] <= i)
			{
				int tempCoins = coins[i - coinList[j]];

				if (tempCoins != INT_MAX && tempCoins + 1 < coins[i])
					coins[i] = tempCoins + 1;
			}
	}
	return (coins[value]);
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always (0) Succses
 */
int main(int argc, char **argv)
{
	long k;
	int coinsList[5] = {25, 10, 5, 2, 1};
	int coinsCount = 5;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	k = atol(argv[1]);

	if (k < 0)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", minCoins(coinsList, coinsCount, k));
	return (0);
}
