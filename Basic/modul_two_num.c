#include <stdio.h>
int main()
{
    int num1, num2, modul;
    printf(" Enter first num = ");
    scanf("%d", &num1);
    printf("Enter scond num = ");
    scanf("%d", &num2);
    modul = num1 % num2;
    printf("modul of %d / %d = %d", num1, num2, modul);
    return 0;
}
