/*----------------- program in C to separate odd and even integers into separate arrays.  ------------------------------------*/
/*----------------- complete_______03/03/2023  ------------------------------------*/

#include <stdio.h>
#define max_size 1000
int main()
{
    int ary[max_size], even[max_size], odd[max_size];
    int size, i, j;

    printf("Enter size of array : ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of array : ", i + 1);
        scanf("%d", &ary[i]);
    }
    /*----------------- check even odd num of array ------------------------------------*/

    for (i = 0; i < size; i++)
    {
        if (ary[i] % 2 == 0)
        {
            even[i] = ary[i];
        }
        else
        {
            odd[i] = ary[i];
        }
    }
    /*----------------- print even num of array ------------------------------------*/

    printf("\n\n");
    printf("Even num of array : ");
    for (i = 0; i < size; i++)
    {
        if (even[i] != 0)
        {

            printf("%d ", even[i]);
        }
    }
    /*----------------- print odd num of array ------------------------------------*/

    printf("\n\n");
    printf("odd num of array : ");
    for (i = 0; i < size; i++)
    {
        if (odd[i] != 0)
            printf("%d ", odd[i]);
    }

    return 0;
}