#include <stdio.h>
#include <ctype.h>
int main()
{
    char z;
    printf("Emter a cherctor : ");
    scanf("%c", &z);
    if (isalnum(z))
    {
        printf("Enter cherctor is Alphawate :");
    }
    else
    {
        printf("Enter cherctor isnot  Alphawate :");
    }
    return 0;
}