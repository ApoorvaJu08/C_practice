#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character\n");
    scanf("%c", &ch);
    printf("\nASCII value of %c is %d", ch, ch);
    return 0;
}