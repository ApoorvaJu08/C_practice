#include <stdio.h>
int main()
{
    int a[2][2][2] = {{10, 2, 3, 4}, {5, 6, 7, 8}};
    int *p, *q;
    p = &a[2][2][2];
    *q = ***a;
    printf("%d---%d", *q);
}

//output - some garbage value----10