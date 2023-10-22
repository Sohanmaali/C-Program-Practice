#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], str1[100], i = 0;
    int vowel = 0, coun = 0;

    printf("Enter a string : ");
    scanf("%s", str);
    //  gets(str);
    while (str[i] != '\0')
    {
        if (str[i] == 'a')
        {
            vowel++;
        }
        i++;
    }
    printf("Vowel = %d\nconsonante = %d", vowel, coun);
    return 0;
}