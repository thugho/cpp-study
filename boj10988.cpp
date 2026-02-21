#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[100];
    scanf("%s", word);
    int last = strlen(word);

    int pellen=1;
    for (int i = 0; i < last/2; i++)
    {
        if (word[i] != word[last-i-1])
        {
            pellen = 0;
        }
    }
    if (pellen == 1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    

    return 0;

}
# BOJ 10988 - 팰린드롬인지 확인하기

## 문제 유형
문자열, 구현

## 풀이 방법
- 문자열 길이 구함
- 앞뒤 비교
- 절반만 비교

## 배운 점
- len - 1 - i 인덱스 실수 주의
