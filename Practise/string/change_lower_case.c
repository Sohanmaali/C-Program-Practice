#include <stdio.h>
#include <string.h>

#define max_size 1000
int main()
{
    char str[100], str1[100];
    int i = 0;

    printf("Enter a string : ");
    // scanf("%s", str);
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    puts(str); // printf("%d", i);
    return 0;
}