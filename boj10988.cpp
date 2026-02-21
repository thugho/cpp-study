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