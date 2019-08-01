#include <stdio.h>
int main()
{
    int n, reversedInteger = 0, r, originalInteger;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalInteger = n;
    while(n != 0)
    {
        r = n % 10;
        reversedInteger = reversedInteger * 10 + r;
        n = n / 10;
    }
    if(originalInteger == reversedInteger)
        printf("%d is a palindrome\n", originalInteger);
    else
    {
        printf("%d is not a palindrome\n", originalInteger);
    }
    return 0;
}