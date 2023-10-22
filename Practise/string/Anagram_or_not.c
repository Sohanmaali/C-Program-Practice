#include <stdio.h>
#include <string.h>

#define max_size 1000
int main()
{
    char str[100], str1[100], i = 0, j, count;

    printf("Enter a string : ");
    // scanf("%s ", str);
    gets(str);
    gets(str1);
    for (i = 0; str[i] != '\0'; i++)
    {
        count = 1;
        for (j = i + i; j < str[j]; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (count == 1
        {
            str1[i] == str[i];
        }
    }
   
    //  puts(str); // printf("%s", str);
    return 0;
}