#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <time.h>
#include <stdio.h>
//#include <string.h>
//#include <ctype.h>

int main()
{
    int N, K;
    int divisor[10000];
    //약수 개수 초기화
    int count=0;
    //N,K값 입력
    scanf("%d %d",&N,&K);

    //약수 구하기+약수 개수 카운팅
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            divisor[count] = i;
            count++;
        }
    }
 
    if (count < K)
    {
        printf("0\n");
    }
    else
    {
        printf("%d\n", divisor[K - 1]);
    }

    return 0;
}