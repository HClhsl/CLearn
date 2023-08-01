#include "stdio.h"

int main()
{
    // int r=3*6+8*9%4;
    int a;
    while (1)
    {
        scanf("%d", &a);
        if (3 < a < 10)
            printf("between\n");
        else
            printf("Not\n");
    }
    // printf("r=%d\n",r);
}