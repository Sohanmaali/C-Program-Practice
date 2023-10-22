#include <stdio.h>
int main()
{
    int num;
    printf("Enter a character : ");
    scanf("%d", &num);

    // american Standard Code for Information Interchange
    if ((num >= 65 && num <= 90) || (num >= 97 && num <= 122))
    {
        printf("By american Standard Code for Information Interchange\n");
        printf("%d = %c\n", num, num);
        printf("%c is alfabate", num);
    }
    else
    {
        printf("By american Standard Code for Information Interchange\n");
        printf("%d is not alfabate", num);
    }
    return 0;
}