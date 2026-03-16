#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{ 
    int N;
    scanf("%d", &N);
    int volume[100];
    int prime = 0;
    int result = 0;

    //정수 입력받기
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &volume[i]);
    }
    for (int j = 0; j < N; j++)
    {
        if (volume[j] >= 2)
        {//2이상일때 소수 판별
            for (int i = 2; i < volume[j]; i++)
            {   
                if (volume[j] % i == 0)
                {
                    prime = 1;
                }
            }
        }
        //1과 0은 소수x로 판별
        else if (volume[j] == 1 || volume[j] == 0)
        {
            prime = 1;
        }
        if (prime==0)
        {
            result++;
        }
        prime = 0;
    }
    
    printf("%d", result);
 
    return 0;
} 