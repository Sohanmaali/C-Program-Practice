#include <stdio.h>
#include <ctype.h>
int main()
{
    char a;
    printf("Enter a vari");
    scanf("%c", &a);
    printf("Entererd vari is %d", a);
    if (isupper(a))
    {
        printf("enterd Vari is upper cash char");
    }
    else if (islower(a))
    {
        printf("Enterd Vari is lower cash char ");
        else
        {
            printf("Enterd Vari is lower spaciyal char ");
        }
    }
    return 0;
}
