#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], str1[100];
    int i = 0;
    int count = 1;

    printf("Enter a string : ");
    scanf("%s", str);
    //  gets(str);
    while (str[i] != '\0')
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            count++;
        }
        i++;
    }
    printf("word = %d", count);
    return 0;
}