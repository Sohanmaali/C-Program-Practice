

// Write a program in C to count the digits of a given number using recursion.
#include <stdio.h>
int count_digit(int);
int count = 0;

int main()
{
    int num, digit;

    printf("Enter a num : ");
    scanf("%d", &num);

    digit = count_digit(num);
    printf("digit in num = %d", digit);
    
    return 0;
}

int count_digit(int n1)
{
    if (n1 <= 0)
    {
        return n1;
    }
    else
    {
        // n1 / 10;
        count = count + 1;
        // printf("%d ", count);
        count_digit(n1 / 10);
    }
    return count;
}
