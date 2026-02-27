#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <string.h>
//#include <ctype.h>

int main()
{
    int testcase;

    scanf("%d", &testcase);
    
    for (int i = 0; i < testcase; i++)
    {
        int input;
        scanf("%d", &input);

        int quater = input / 25;
        input %= 25;
        int dime = input / 10;
        input %= 10;
        int nickel = input / 5;
        input %= 5;
        int penny = input;

        printf("%d %d %d %d\n", quater, dime, nickel, penny);
    }
    
    return 0;
}