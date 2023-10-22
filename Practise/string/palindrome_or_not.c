#include <stdio.h>
#include <string.h>

#define max_size 1000
int main()
{
    char str[100], str1[100], str3[100];
    int i = 0, j;
    int count = 0;

    printf("Enter a string : ");
    // scanf("%s", str);
    gets(str);
    for (i = 0, j = strlen(str) - 1; i < strlen(str); i++, j--)
    {
        if (str[i] != str[j])
        {
            count = 1;
            break;
        }
    }
    printf("%d\n", count);
    if (count == 0)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }

    // printf("%s", str1);
    return 0;
}