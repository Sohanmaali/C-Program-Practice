

// Write a C program to check whether a number is palindrome or not using recursion.

#include <stdio.h>

int reverse(int);
int palinfrome(int);

 int rev = 0;

int main()
{
    int num;
    printf("Enter a num : ");
    scanf("%d", &num);

    // reverse(num);
    printf("%d is reverse num %d\n", reverse(num), num);

    palinfrome(num);
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
    // static int rev = 0;
    if (n > 0)
    {
        rev = (n % 10) + (rev * 10);
        reverse(n / 10);
        // reverse(n / 10);
        return rev;
    }
}
int palinfrome(int n1)
{
    int a;
    // a = reverse(n1);
    if (rev == n1) // we have stored reverse value in glovel intizer rev so we can use any where
    {
       // printf("%d \n", reverse(n1));
        return 1;
    }
    else
    {
        return 0;
    }
}