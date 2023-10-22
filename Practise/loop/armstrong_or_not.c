#include <stdio.h>
#include <math.h>

int main()
{
    int i, n1, rem, count = 0, temp = 1, arm = 0;

    printf("Enter a num : ");
    scanf("%d", &n1);
    for (i = 1; i < n1; i++)
    {

        temp = i;
        count = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            count++;
            temp /= 10;
        }
        temp = i;
        arm = 0;
        while (temp > 0)
        {
            rem = temp % 10;
            arm = arm + pow(rem, count);
            temp /= 10;
        }
        if (arm == i)
        {

            printf("%d ", arm);
        }
    }

    return 0;
}