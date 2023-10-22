#include <stdio.h>
int main()
{
    int i, num;
    printf("Enter a num : ");
    scanf("%d", &num);
    for (i = 2; i <= num; i++)
    {
        if (num % i != 0)
        {
            printf("prime num ");
            break;
        }
        else
        {
            printf("not prime");
            break;
        }
    }
    return 0;
}