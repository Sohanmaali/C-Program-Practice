

// Write a C program to find sum of digits of a given number using recursion.
#include <stdio.h>
int sum_digit(int);

int main()
{
    int num;
    printf("Rnter a num : ");
    scanf("%d", &num);
    printf("%d ", sum_digit(num)); // function calling and print the value of funvtion
    return 0;
}
int sum_digit(int n)
{
    int ans = 0;
    if (n == 0)
        return 0;
    // else

    ans = (n % 10) + (sum_digit(n / 10)); // functio call itself by recrtivlay

    return ans;
}
