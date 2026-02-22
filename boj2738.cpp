#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int N, M = 0;
    scanf("%d %d", &N, &M);
    int matrix_1[100][100];
    int matrix_2[100][100];
    int sum[100][100];
    int j = 0;

    for (int i = 0; i < N; i++)
    {//첫행렬 9개 입력
        for (j = 0; j < M; j++)
        {
            scanf("%d", &matrix_1[i][j]);
        }
    }
    for (int i = 0; i < N; i++)
    {//2번째행렬 9개 입력
        for (j = 0; j < M; j++)
        {
            scanf("%d", &matrix_2[i][j]);
        }
    }
    for (int i = 0; i < N; i++)
    {//9번 덧셈
        for (j = 0; j < M; j++)
        {
            sum[i][j] = matrix_1[i][j] + matrix_2[i][j];

        }
    }
    for (int i = 0; i < N; i++)
    { //9번 출력
        for (j = 0; j < M; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}