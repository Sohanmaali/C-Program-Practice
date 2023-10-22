#include <stdio.h>
#include <math.h>

int main()
{
    int n1, i, rem, sum = 0, temp, comp, count;
    printf("Enter a num : ");
    scanf("%d", &n1);
    // temp = n1;
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
        sum = 0;

        while (temp != 0)
        {
            rem = temp % 10;
            sum += pow(rem, count);
            temp = temp / 10;
        }
        //  printf("%d\n", sum);
        if (i == sum)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}