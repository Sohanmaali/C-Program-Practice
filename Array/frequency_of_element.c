
/*----------------- frequency of array elements ------------------------------------*/

#include <stdio.h>
#define max_size 1000
int main()
{
    int ary[max_size], ary2[max_size];
    int i, j, size, count;

    printf("Enter size of array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of array : ", i + 1);
        scanf("%d", &ary[i]);
    }

    /*-----------------count frequency of array elements ------------------------------------*/

    for (i = 0; i < size; i++)
    {
        count = 1;
        if (ary2[i] != -1)
        {
            for (j = i + 1; j < size; j++)
            {
                if (ary[i] == ary[j])
                {
                    count++;
                    ary2[j] = -1;
                }
            }
            ary2[i] = count;
        }
    } // loop end

    /*-----------------print frequency of array elements ------------------------------------*/

    for (i = 0; i < size; i++)
    {
        if (ary2[i] != -1)
        {
            printf("frequency %d to %d\n", ary[i], ary2[i]);
        }
    }

    return 0;
}