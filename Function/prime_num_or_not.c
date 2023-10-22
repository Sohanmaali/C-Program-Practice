#include <stdio.h>
int checkparfect(int); // function decleretion
int main()
{
    int num;
    printf("Enter a num : ");
    scanf("%d", &num);
    if (checkparfect(num) == 2) // function call type with argument and with return value
    {
        printf("Enter num is prime num");
    }
    else
    {
        printf("Enter num is not prime num");
    }
    return 0;
}
int checkparfect(int n1)
{

    int i, count = 0;
    for (i = 1; i <= n1; i++) // functio peramiters
    {
        if (n1 % i == 0)
        {
            count++;
        }
    }
    return count;
}