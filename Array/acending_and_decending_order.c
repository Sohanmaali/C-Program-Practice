
/*----------------- Acending and decending order of Array ------------------------------------*/
/*----------------- complete 18-06-2023 ------------------------------------*/

#include <stdio.h>
int main()
{
    int i, arry[100], j, size, max, min;
    printf("Enter size of arry : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
        printf("Enter %d element of Arry : ", i + 1);
        scanf("%d", &arry[i]);
    }
    max = min = 0;
    /*----------------- Acending order of Array ------------------------------------*/

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arry[i] > arry[j])
            {
                min = arry[i];
                arry[i] = arry[j];
                arry[j] = min;
            }
        }
    }

    /*----------------- print acending order of Array ------------------------------------*/
    printf("\n\n");
    printf("acending order of arry : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arry[i]);
    }
    /*----------------- decending order of Array ------------------------------------*/
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arry[i] < arry[j])
            {
                max = arry[i];
                arry[i] = arry[j];
                arry[j] = max;
            }
        }
    }
    /*-----------------print decending order of Array ------------------------------------*/
    printf("\n\n");
    printf("dicending order of arry : ");

    for (i = 0; i < size; i++)
    {
        printf("%d ", arry[i]);
    }
    return 0;
}