#include <stdio.h>
int main()
{
    int num1, num2, div;
    printf(" Enter first num = ");
    scanf("%d", &num1);
    printf("Enter scond num = ");
    scanf("%d", &num2);
    div = num1 / num2;
    printf("div of %d / %d = %d", num1, num2, div);
    return 0;
}