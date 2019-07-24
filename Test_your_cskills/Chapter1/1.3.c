#include <stdio.h>
int main()
{
    int x = 40;
    {
        int x = 20;
        printf("\n%d", x);
    }
    printf("%d", x);
}