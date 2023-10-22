
// Write a program in C to check armstrong and perfect numbers using the function.

#include <stdio.h>
#include <math.h>
int armstrong(int);
int parfect(int);

// void perfet(it);

int main()
{
    int num, temp;
    printf("Enter a num : ");
    scanf("%d", &num);
    temp = num;
    if (armstrong(num) == temp)
    {
        printf("Armstrong num \n");
    }
    else
    {
        printf("not Armstrong num \n");
    }
    if (parfect(num) == temp)
    {
        printf("parfect num \n");
    }
    else
    {
        printf("not parfect num \n");
    }

    // perfect(num);
    return 0;
}
int armstrong(int a)
{
    int count, temp, i, sum, r;
    temp = a;
    count = 0;
    while (temp != 0)
    {

        temp /= 10;
        ++count;
    }
    sum = 0;
    temp = a;
    while (temp != 0)
    {

        r = temp % 10;        // for reminder
        sum += pow(r, count); // sum and sqr use power function
        temp /= 10;           // for remove last digite
    }

    return (sum);
}
int parfect(int b)
{
    int sum = 0;
    for (int i = 1; i < b; i++)
    {
        if (b % i == 0)

        {
            sum = sum + i;
        }
    }
    return (sum);
}
