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
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowel++;
        }
        else
        {
            coun++;
        }
        i++;
    }
    printf("Vowel = %d\nconsonante = %d", vowel, coun);
    return 0;
}