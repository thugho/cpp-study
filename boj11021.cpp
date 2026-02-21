#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <string.h>
//#include <ctype.h>

int main()
{
    int mount=0;
    scanf("%d", &mount);
    int num = 1;
    for (int i = 0; i < 2*mount; i+=2)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", num, a+b);
        num++;
    }

    

    return 0;
}