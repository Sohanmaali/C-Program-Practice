
// Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
#include <stdio.h>
int series(int num)
{
    int fect = 1, sum = 0;
    for (int i = 1; i <= num; i++)
    {
        fect *= i;
        sum += fect / i;
    }
    printf("sum = %d", sum);
    return sum;
}

int main()
{
    int num;
    printf("Enter a num : ");
    scanf("%d", &num);
    series(num);
    return 0;
}