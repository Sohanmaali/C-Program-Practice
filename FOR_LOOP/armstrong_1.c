#include <stdio.h>
#include <math.h>
int main()
{
    int i, r, num, temp, sum;

    printf("Enter num : ");
    scanf("%d", &num);

    temp = num;
    sum = 0;
    while (temp > 0)
    {

        r = temp % 10; // for riminder
        sum = sum + pow(r, 3);
        printf("%d\n", sum);
        // (r * r * r); // sum and sqr

        temp = temp / 10; // for remove last digite
    }
    // printf("%d\n", sum);
    if (sum == num)
    {
        printf("%d armstrong num ", sum);
    }
    else
    {
        printf("%d not armstrong num ", sum);
    }
    return 0;
}