#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter a charctor : ");
    scanf("%c", &ch);
    if (islower(ch))
    {
        printf("Reverse case of %c is : ", ch);
        putchar(toupper(ch));
    }
    else if (isupper(ch))
    {
        printf("Reverse case of %c is : ", ch);
        putchar(tolower(ch));
    }
    else
    {
        printf("Invalide value");
    }
    return 0;
}