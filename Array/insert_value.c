/*----------------- program in C to insert the values in the array (sorted list). ------------------------------------*/

#include <stdio.h>
#define max_size 1000
int main()
{
    int ary[max_size], ary2[max_size];
    int i, size, ele, pos;

    printf("Enter size of array : ");
    scanf("%d", &size);

    /*----------------- take element of array ------------------------------------*/

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of array : ", i + 1);
        scanf("%d", &ary[i]);
    }

    printf("Enter a element to inser : ");
    scanf("%d", &ele);

    printf("Enter index num to chenge : ");
    scanf("%d", &pos);

    /*----------------- change value of  array indaxe ------------------------------------*/

    for (i = size; i > pos; i--)
    {
        ary[i] = ary[i - 1];
    }
    ary[pos] = ele;
    // printf("\n");
    //   printf("%d ", ary[i]);
    /*----------------- print after change index value ------------------------------------*/

    printf("after change value index : ");
    for (i = 0; i <= size; i++)
    {
        printf("%d ", ary[i]);
    }

    return 0;
}