#include <stdio.h>
int main()
{
    int num1, num2, sub;
    printf(" Enter your first num = ");
    scanf("%d", &num1);
    printf(" Enter your scond num = ");
    scanf("%d", &num2);
    sub = num1 - num2;
    printf("division of %d - %d = %d ", num1, num2, sub);
    return 0;
}