// C program to print inverted half pyramid pattern using stars
#include <stdio.h>
int main()
{
    int i, j, n, k = 0;
    scanf("%d",&n);

    for(i = n; i >= 1; --i)
    {
        for(j = 1; j <= i; ++j)
        {
        printf("* ");
        }
        printf("\n");
    }
    return 0;
}