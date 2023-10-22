

// Write a C program to check whether a number is palindrome or not using recursion.

#include <stdio.h>

int reverse(int);
int palinfrome(int);

// int rev = 0;

int main()
{
    int num;
    printf("Enter a num : ");
    scanf("%d", &num);
    // reverse(num);
    // printf("%d is reverse num %d\n", reverse(num), num);
    //  int temp = num;

    if (palinfrome(num) == 1)
    {
        printf(" %d is palindroem num :", num);
    }
    else
    {
        printf("%d is not palindroem num :", num);
    }

    return 0;
}
int reverse(int n)
{
    static int rev = 0;
    if (n > 0)
    {
        rev = (n % 10) + (rev * 10);
        reverse(n / 10);

        return rev;
    }
}
int palinfrome(int n1)
{
    // reverse(n1);
    if (reverse(n1) == n1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}