#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[1000000];
    scanf("%s", word);
    int last = strlen(word);
    int most[26] = { 0 };

    for (int i = 0; i < last; i++)
    {
        char ch = toupper(word[i]);
        most[ch - 'A']++;
    }
    int max = 0;
    int ac = 0;
    int duplicate = 0;

    for (int j = 0; j < 26; j++)
    {
        if (most[j] > max)
        {
            max = most[j];
            ac = j;
            duplicate = 0;
        }
        else if (most[j] == max)
        {
            duplicate = 1;
        }
    }
    if (duplicate)
    {
        printf("?");
    }
    else
    {
        printf("%c", ac+'A');
    }

    return 0;
}