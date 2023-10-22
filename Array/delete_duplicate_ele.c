#include <stdio.h>
#define max_size 1000
int main()
{
    int arry[max_size];
    int arr[max_size];
    int i, j, size, count = 0, total = 0;
    printf("Enter size of array : ");
    scanf("%d", &size);

    /*----------------- take element of array --------------------------*/
    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of array : ", i + 1);
        scanf("%d", &arry[i]);
    }

    for (i = 0; i < size; i++)
    {
        if (arry[i] != -1)
            // {
            for (j = i + 1; j <= size; j++)
            {
                if (arry[i] == arry[j])
                {
                    arry[j] = -1;
                }
                // printf("%d ", arr[i]);
                arr[i] = arry[i];
            }
        // }
    }
    printf("\n");
    for (i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            continue;
        }
        else
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}