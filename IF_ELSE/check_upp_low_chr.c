#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Emter a cherctor : ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("Enter cherctor is lowe case Alphawate :");
    }
    else
    {
        printf("Enter cherctor is upper case Alphawate :");
    }
    return 0;
}