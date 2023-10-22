
/*----------------- C program to print all unique element in an array of Array ------------------------------------*/
/*----------------- complete 09-03-2023 ------------------------------------*/

#include <stdio.h>
#define max_size 1000
int main()
{
    int arry[max_size], size;
    int i, j, count = 0;
    printf("Enter size of array : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element of array : ", i + 1);
        scanf("%d", &arry[i]);
    }

    /*-----------------check unique element of array ------------------------------------*/

    for (i = 0; i < size; i++)
    {
        if (arry[i] != -1)
        {

            count = 0;

            for (j = i + 1; j <= size; j++)
            {

                if (arry[i] == arry[j])
                {
                    count++;
                    arry[j] = -1;
                }
            }
        }
        if (count == 0 && arry[i] != -1)

        {
            // print unique element of array
            printf("%d ", arry[i]);
            // arr1[i] = count;
        }

        // printf("%d ", arr1[i]);
    }

    return 0;
}