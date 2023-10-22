

// Write a C program to find sum of all even or odd numbers in given range using recursion.
#include <stdio.h>
int sum_even(int);
int sum_odd(int);

int main()
{
    int num, sum;
    printf("Enter range : ");
    scanf("%d", &num);

    printf("Sum of even num = ");
    sum = sum_even(num);
    printf("%d", sum);

    printf("\nSum of odd num = ");
    sum = sum_odd(num);
    printf("%d", sum);

    return 0;
}
int sum_even(int n1)
{
    int sum = 0;
    if (n1 > 1)
        sum = sum_even(n1 - 1);

    if (n1 % 2 == 0)
        sum += n1;
    return sum;
}
int sum_odd(int n1)
{
    int sum = 0;
    if (n1 > 0)
        sum = sum_odd(n1 - 1);
    if (n1 % 2 == 1)
        sum += n1;
    return sum;
}