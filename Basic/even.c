#include <stdio.h>
int main()
{
    int num1;
    printf("Enter a num : ");
    scanf("%d", &num1);
    printf("You enterd num is %d ", num1);
    if (num1 % 2 == 0)
    {
        printf("Enter num is even");
    }
    else
    {
        printf("Enter num is odd");
    }
}