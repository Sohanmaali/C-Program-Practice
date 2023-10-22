#include <stdio.h>
#include <string.h>

#define max_size 1000
int main()
{
    char str[100], str1[100], i = 0, j;
    int count = 0;

    printf("Enter a string : ");
    // scanf("%s", str);
    gets(str);
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    // printf("%d", count); // printf("%s", str);
    for (i = 0, j = count - 1; i < count; i++, j--)
    {
        str1[j] = str[i];
    }
    str1[count] = '\0';
    printf("%s", str1);
    return 0;
}