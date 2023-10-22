#include <stdio.h>
int main()
{
    int num1, num2, multi;
    printf(" Enter your first num = ");
    scanf(" %d", &num1);
    printf(" Enter your scond num = ");
    scanf("%d", &num2);
    multi = num1 * num2;
    printf("multi of %d * %d = %d", num1, num2, multi);
    return 0;
}