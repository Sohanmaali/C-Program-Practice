
/*----------------- element present or not in array ------------------------------------*/

#include <stdio.h>
#define max_size 1000
int main()
{
    int arry[max_size];
    int i, j, temp, size;
    int low, mid, high, element, count = 0;

    printf("Enter size of arry : ");
    scanf("%d", &size);

    /*----------------- take element of array ------------------------------------*/

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of Arry : ", i + 1);
        scanf("%d", &arry[i]);
    }

    printf("Enter founding element : ");
    scanf("%d", &element);

    /*----------------- Asending order of aaray ------------------------------------*/

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arry[i] > arry[j])
            {
                temp = arry[i];
                arry[i] = arry[j];
                arry[j] = temp;
            }
        }
    }
    /*----------------- print Asending order of aaray ------------------------------------*/

    // for (i = 0; i < size; i++)
    // {
    //     printf("%d ", arry[i]);
    // }

    /*-----------------check element present or not in array ------------------------------------*/

    low = 0, high = size;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (mid == element)
        {
            count++;
            printf("\n%d is found in this arrays i : ", element);
            break;
        }
        else if (mid < element)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    /*----------------- print element present or not in array ------------------------------------*/

    if (count == 0)
    {
        printf("\n%d is not found in this array : ", element);
    }

    return 0;
}