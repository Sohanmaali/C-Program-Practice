
/*----------------- element present or not in array ------------------------------------*/

#include <stdio.h>
#define max_size 1000

void bubbleshort(int arr[], int lenth)
{
    int i, j, temp;
    for (i = 1; i < lenth; i++)
    {
        for (j = 0; j < lenth; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arry[max_size];
    int i, j, temp, size;

    printf("Enter size of arry : ");
    scanf("%d", &size);

    /*----------------- take element of array ------------------------------------*/

    for (i = 0; i < size; i++)
    {
        printf("Enter %d index element of Arry : ", i + 1);
        scanf("%d", &arry[i]);
    }

    /*----------------- Asending order of aaray ------------------------------------*/

    bubbleshort(arry, size); // function calling

    /*----------------- print Asending order of aaray ------------------------------------*/

    for (i = 0; i < size; i++)
    {
        printf("%d ", arry[i]);
    }

    /*----------------- print element present or not in array ------------------------------------*/

    return 0;
}