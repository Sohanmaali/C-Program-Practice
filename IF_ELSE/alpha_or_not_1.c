#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is alfabate", ch);
    }
    else
    {
        printf("not alfabate");
    }
    return 0;
}