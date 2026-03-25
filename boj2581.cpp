#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int M, N;
	int max = 0;
	int min = 0;
	scanf("%d %d", &M, &N);
	
	for (int j = M; j <= N; j++)
	{
		if (j < 2)
			continue;
		int prime = 1;

		for (int i = 2; i * i <= j; i++)
		{
			if (j % i == 0)
			{
				prime = 0;
				break;
			}
		}
		if (prime)
		{
			max = max + j;
			if (min==0)
			{
				min = j;
			}
		}
	}
	if (max == 0)
	{
		printf("-1");
	}
	else
	{
		printf("%d\n", max);
		printf("%d", min);
	}

	return 0;
}


