
/*----------------- element present or not in array ------------------------------------*/

#include <stdio.h>
#define max_size 1000

int fount(int arry[], int size, int num)
{
    /*-----------------check element present or not in array ------------------------------------*/
    int low, mid, high, element;
    low = 0, high = size; // fount(arry, size, element)
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arry[mid] == num)
        {
            return mid;
        }
        else if (arry[mid] < num)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }

    return -1;
}
int main()
{
    int arry[max_size];
    int i, j, temp, size, element, count;

    printf("Enter size of arry : ");
    scanf("%d", &size);

    /*----------------- take element of array ------------------------------------*/

    for (i = 0; i < size; i++)
    {
        printf("Enter %d index element of Arry : ", i);
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

    /*----------------- print element present or not in array ------------------------------------*/
    count = fount(arry, size, element);
    // printf("%d\n", count);
    /*----------------- print element present or not in array ------------------------------------*/

    if (count == -1)
    {
        printf("\n%d is not found in this array : ", element);
    }
    else
    {

        printf("\n%d is found in array : ", element);
    }
    // printf("\n%not found in this array : ");

    return 0;
}