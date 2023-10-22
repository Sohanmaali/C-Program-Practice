
/*----------------- Write a C program to find reverse of any number using recursion. ------------------------------------*/

#include <stdio.h>
int reverse_num(int n)
{
    static int rev = 0;
    if (n > 0)
    {
        rev = (rev * 10) + (n % 10);
        reverse_num(n / 10); // function calling recrsivaly
    
    }
    return rev;
}
/*----------------- main function start. ------------------------------------*/

int main()
{
    int num, rev;
    printf("Enter a num : ");
    scanf("%d", &num);

    rev = reverse_num(num);
    printf("After reverse num = %d", rev);
    return 0;
}
