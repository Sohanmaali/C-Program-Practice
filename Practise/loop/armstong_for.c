#include <stdio.h>
#include <math.h>
int main()
{
    int n, sum = 0, rem, i, j, count, temp;

    printf("Enter a num : ");
    scanf("%d", &n);
    for (j = 1; j < n; j++)
    {
     temp = j;
        count = 0;
        for (i = temp; temp != 0; temp /= 10)
        {
            rem = temp % 10;
            count++;
        }
        sum = 0;
        temp = j;
        for (i = temp; temp != 0; temp = temp / 10)

        {
            rem = temp % 10;
            sum += pow(rem, count);
        }
        if (j == sum)
        {
            printf("%d, ", j);
        }
    }
    return 0;
}