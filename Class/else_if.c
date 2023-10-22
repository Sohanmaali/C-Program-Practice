#include <stdio.h>
int main()
{

    int num1, num2, num3;

    printf("Enter three num : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 == num2 && num1 == num3 && num2 == num3)
    {
        printf("Both are same ");
    }
    /*-----------------------------------------------*/
    else if (num1 == num2 && num1 != num3)
    {
        if (num1 > num3)
        {
            printf("G = %d\nS = %d", num1, num3);
        }
        else
        {
            printf("G = %d\nS = %d", num3, num1);
        }
    }
    else if (num1 == num3 && num1 != num2)
    {
        if (num1 > num2)
        {
            printf("G = %d\nS = %d", num1, num2);
        }
        else
        {
            printf("G = %d\nS = %d", num2, num1);
        }
    }

    else if (num2 == num3 && num2 != num1)
    {
        if (num2 > num1)
        {
            printf("G = %d\nS = %d", num2, num1);
        }
        else
        {
            printf("G = %d\nS = %d", num1, num2);
        }
    }
    /*-------------------------------------------------*/
    else if (num1 != num2 && num1 != num3)
    {
        if (num1 > num3)
        {
            if (num2 > num3)

                printf("G = %d\nM = %d\nS = %d", num1, num2, num3);
        }
        // else
        // {
        //     printf("G = %d\nM = %d\nS = %d", num3, num2, num1);
        // }
    }

    else if (num2 != num3 && num2 != num1)
    {
        if (num2 > num1)
        {
            if (num3 > num1)
                printf("G = %d\nM = %d\nS = %d", num2, num3, num1);
        }
        // else
        // {
        //     printf("G = %d\nM = %d\nS = %d", num1, num3, num2);
        // }
    }

    else if (num2 != num3 && num2 != num1)
    {
        if (num2 > num1)
        {
            if (num3 > num1)
                printf("G = %d\nM = %d\nS = %d", num2, num3, num1);
        }
        // else
        // {
        //     printf("G = %d\nM = %d\nS = %d", num1, num3, num2);
        // }
    }

    return 0;
}