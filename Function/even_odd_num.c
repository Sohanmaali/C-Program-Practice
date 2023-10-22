

// Write a program in C to check a given number is even or odd using the function.

#include <stdio.h>
void check_even_odd(int number)
{
    if (number % 2 == 0)
    {
        printf("Ente num is Even");
    }
    else
    {
        printf("Enter num is Odd");
    }
}
int main()
{
    int num;
    printf("Enter a num : ");
    scanf("%d", &num);
    check_even_odd(num);
    return 0;
}