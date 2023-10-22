#include <stdio.h>
#define max_size 100
int main()
{
    int array1[max_size];
    int array2[max_size];
    int array3[max_size];
    int inter[max_size];

    int i, j, k,size1, size2, size3, count;

    printf("Enter size1 of array1 : ");
    scanf("%d", &size1);

    printf("\n");

    for (i = 0; i < size1; i++)
    {
        printf("Enter %d element of array1 : ", i + 1);
        scanf("%d", &array1[i]);
    }

    printf("\n");

    printf("Enter size2 of array2 : ");
    scanf("%d", &size2);

    printf("\n");

    for (i = 0; i < size2; i++)
    {
        printf("Enter %d element of array2 : ", i + 1);
        scanf("%d", &array2[i]);
    }

    printf("\n");

    for (i = 0,k=0; i < size1; i++)
    {
        count = 0;
        for (j = 0; j < size2 && count == 0; j++)
        {
            if (array1[i] == array2[j])
            {
                count++;
            }
            if (count==1)
            {
                array3[k] = array1[i];
                k++;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        if (array3[i] != 0)
        {
            printf("%d ", array3[i]);
        }
    }
    return 0;
}