#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int N, B;
    scanf("%d %d", &N, &B);
    int time = 0;
    char result[40];


    while (N > 0)
    {
        int remainder = N % B;

        if (remainder < 10)
        {
            result[time++] = remainder + '0';
        }
        else
        {
            result[time++] = remainder - 10 + 'A';
        }

        N = N / B;
    }
    for (int i = time - 1; i >= 0; i--)
    {
 
        printf("%c", result[i]);
    }

    return 0;
}