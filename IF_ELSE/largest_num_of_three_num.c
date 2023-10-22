#include <stdio.h>
// find largest num of three numbers
int main()
{
    int num1, num2, num3;
    printf("Enter three num : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("Largest num = %d", num1);
        }
        else
        {
            printf("Largest num = %d", num3);
        }
    }
    else if (num2 > num1)
    {
        if (num2 > num3)
        {

            printf("Largest num = %d", num2);
        }
        else
        {
            printf("Largest num = %d", num3);
        }
    }

    return 0;
}