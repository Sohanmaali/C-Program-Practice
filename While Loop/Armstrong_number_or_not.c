// Write a C# Sharp program to check whether a given number is an Armstrong number or not.
#include <stdio.h>
#include <math.h>
int main()
{
    int i, r, num, sum = 0;
    printf("Enter a num : ");
    scanf("%d", &num);
    i = num;
    while (i != 0)
    {
        r = i % 10;
        sum += r * r * r;
        i = i / 10;
    }

    if (num == sum)

        printf("%d is an Armstrong number.", num);

    else

        printf("%d is an not Armstrong number.", num);

    return 0;
}