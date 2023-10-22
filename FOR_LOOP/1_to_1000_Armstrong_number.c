#include <stdio.h>
#include <math.h>
int main()
{
    int i, r, num, temp, sum;

    printf("Enter num : ");
    scanf("%d", &num);

    printf("Armstrong numbers in given range are: ");

    for (i = 1; i <= num; i++)
    {
        temp = i;
        sum = 0;
        while (temp != 0)
        {

            r = temp % 10; // for riminder
            sum = sum + pow(r, 3);
            // (r * r * r); // sum and sqr

            temp /= 10; // for remove last digite
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}