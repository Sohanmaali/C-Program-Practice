#include <stdio.h>
int add(int, int);
int main()
{
    int num1, num2, i, sum = 0;
    printf("Enter starting and ending num : ");

    scanf("%d %d", &num1, &num2);
    sum = add(num1, num2);
    
    printf("sum = %d", sum);
    return 0;
}
int add(int n1, int n2)
{
    int i, sum = 0;
    for (i = n1; i <= n2; i++)
    {
        sum += i;
    }
    return sum;
}