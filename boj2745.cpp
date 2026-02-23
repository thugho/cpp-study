#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int B=0;
    int sum = 0;
    char N[100];
    
    scanf("%s %d", N, &B);
    int len = strlen(N);

    for (int i = 0; i < len; i++)
    {
        int value;
        if (isdigit(N[i]))
        {
            value = N[i] - '0';
        }
        else
        {
            value = toupper(N[i]) - 'A' + 10;
        }
        sum = sum*B + value;
    }
    printf("%d", sum);

    return 0;
}