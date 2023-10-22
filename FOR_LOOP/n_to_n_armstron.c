#include <stdio.h>
#include <math.h>
int main()
{
    int i, sum, num, num1, temp, count, rem;

    printf("Enter a num : ");
    scanf("%d", &num1);

    printf("Enter a num : ");
    scanf("%d", &num);

    for (i = num1; i <= num; i++)
    {
        temp = i;
        count = 0;

        while (temp != 0)
        {
          
            temp /= 10;
            count++;
        }
        sum = 0;
        temp = i;
        while (temp != 0)
        {
            rem = temp % 10;
            sum += pow(rem, count);
            temp /= 10;
        }
        if (i == sum)
        {

            printf("%d ", i);
        }
    }
    return 0;
}