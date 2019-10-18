#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character\n");
    scanf("%c", &ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("\n%c is a alphabet", ch);
    else
        printf("\n%c is not an alphabet", ch);
    return 0;
}