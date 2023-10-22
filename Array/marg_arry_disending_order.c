#include <stdio.h>
#include <limits.h>
#define max_size 1000
int main()
{
    int arry1[max_size], arry2[max_size], arry3[max_size];
    int size, size1, size2;
    int i, j, max;

    /*----------------- insert size of first and second array ------------------------------------*/

    printf("Enter size of first arry : ");
    scanf("%d", &size);

    printf("Enter size of second arry : ");
    scanf("%d", &size1);

    printf("\n\n");
    /*----------------- insert first array element ------------------------------------*/

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of array 1 : ", i + 1);
        scanf("%d", &arry1[i]);
    }

    printf("\n\n");
    /*----------------- insert second array element ------------------------------------*/

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of array 2 : ", i + 1);
        scanf("%d", &arry2[i]);
    }

    /*----------------- insert in the third array------------------------------------*/
    size2 = size + size1;
    for (i = 0; i < size; i++)
    {
        arry3[i] = arry1[i];
    }

    for (j = 0; j < size1; j++)
    {
        arry3[i] = arry2[j];
        i++;
    }
    /*----------------- print third array ------------------------------------*/

    printf("\n\n");

    printf("third array : ");
    for (i = 0; i < size2; i++)
    {
        printf("%d ", arry3[i]);
    }

    /*----------------- disending order of third array------------------------------------*/

    max;
    for (i = 0; i < size2; i++)
    {
        for (j = i + 1; j < size2; j++)
        {

            if (arry3[i] < arry3[j])
            {
                max = arry3[i];
                arry3[i] = arry3[j];
                arry3[j] = max;
            }
        }
    }
    printf("\n\n");

    /*----------------- print disending order array------------------------------------*/

    for (i = 0; i < size2; i++)
    {

        printf("%d ", arry3[i]);
    }
    return 0;
}