#include <stdio.h>
#include <math.h>
int armstrong(int n)
{
    int count = 0, i, rem, arm = 0, temp;
    temp = n;
    while (temp != 0)
    {
        count++;
       //  rem = temp % 10;
        temp /= 10;
    }
     printf("%d", count);
    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        arm += pow(rem, count);

        // printf("%d ", rem);
        // printf("\n%d ", arm);
        temp /= 10;
    }
    if (arm == n)
    {
        printf("Armstrong num :");
    }
    else
    {
        printf("not Armstrong num :");
    }

    return 0;
}
int parfect(int num)
{
    int i, sum = 0;
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {

            sum += i;
        }
    }
    if (sum == num)
    {
        printf("\nparfect num :");
    }
    else
    {
        printf("\nnot parfect num :");
    }
    return 0;
}
int main()
{
    int num, arm;
    printf("Enter a num : ");
    scanf("%d", &num);
    armstrong(num);

      parfect(num);
    return 0;
}