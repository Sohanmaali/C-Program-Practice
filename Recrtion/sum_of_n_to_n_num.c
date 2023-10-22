

//// Write a C program to find sum of all natural numbers between 1 to n using recursion.
#include <stdio.h>

int sum_of(int, int);

int main()
{
    int num1, num2, ans;
    printf("Enter starting num : ");
    scanf("%d", &num1);

    printf("Enter anding num : ");
    scanf("%d", &num2);

    ans = sum_of(num1, num2);
    printf("Sum of %d to %d = %d", num1, num2, ans);
    return 0;
}
int sum_of(int n1, int n2)
{
    if (n1 == n2)
        return n1;
    return (n1 + sum_of(n1 + 1, n2));
}