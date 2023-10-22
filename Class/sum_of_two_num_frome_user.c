#include <stdio.h>
int main()
{
    int num1, num2, sum;

    printf("Enter a first num : ");
    scanf("%d", &num1);

    printf("Enter a second num : ");
    scanf("%d", &num2);
    
    sum = num1 + num2;

    printf("Sum of two num = %d", sum);
    return 0;
}