#include <stdio.h>
int main()
{
    char z;
    printf("Enter a cherector : ");
    scanf("%c", &z);
    switch (z)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is a vowel", z);
        break;

    default:
        printf("%c is not a vowel", z);
        break;
    }
}