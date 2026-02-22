#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <string.h>
//#include <ctype.h>

int main()
{
    char matrix[5][15]={0};
    //2차원배열에 1차원배열로 입력을하면 한행씩 입력받는다..!
    for (int i = 0; i < 5; i++)
    {//한행씩 입력받기
        scanf("%s", &matrix[i]);
    }


    for (int j = 0; j < 15; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            if (matrix[i][j] != '\0')
            {
                printf("%c", matrix[i][j]);
            }
        }
    }
    return 0;
}