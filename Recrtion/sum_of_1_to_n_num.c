

// Write a C program to find sum of all natural numbers between 1 to n using recursion.
#include <stdio.h>

int sum_all_num(int, int);

int main()
{
    int num, ans;
    printf("Enter ending num : ");
    scanf("%d", &num);
    ans = sum_all_num(1, num);
    printf("Sum of n number : %d", ans);
    return 0;
}
int sum_all_num(int n, int m)
{
    int ans;
    // int sum = 0;
    if (n == m)
        return n;
    ans = n + sum_all_num(n + 1, m);
    return ans;
}
