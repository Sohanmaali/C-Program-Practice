#include <stdio.h>
int main()
{
    int i, num, sum = 0;
    printf("Enter a num : ");
    scanf("%d", &num);
    for (i = 1; i <= num;i= i+2)
    {
        sum += i;
    }
    printf("Sum = %d ", sum);
    return 0;
}