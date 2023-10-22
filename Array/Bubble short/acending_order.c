
/*----------------- Acending order of Array ------------------------------------*/

#include <stdio.h>
#define max_size 1000
int main()
{
    int arry[max_size];
    int i, j, size, temp, swap = 0;

    printf("Enter size of array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of array : ", i + 1);
        scanf("%d", &arry[i]);
    }

    /*----------------- Acending order of Array using bubble short ------------------------------------*/

    for (i = 1; i < size; i++)
    {
        swap = 0;
        for (j = 0; j < size - i; j++)
        {
            if (arry[j] > arry[j + 1])
            {
                temp = arry[j];
                arry[j] = arry[j + 1];
                arry[j + 1] = temp;
                swap = 1;
            }
        }
        if (swap == 0)
        {
            break;
        }
    }
    /*----------------- print Acending order of Array ------------------------------------*/
    printf("acending order of array : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arry[i]);
    }
    return 0;
}