#include <stdio.h>
int main()
{
    int n, r, sum = 0, tmp;
    printf("Enter the number : \n");
    scanf("%d", &n);
    tmp = n;
    while(n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if(tmp == sum)
        printf("It is an armstrong number\n");
    else
    {
        printf("Not an armstrong number\n");
    }
    return 0; 
}