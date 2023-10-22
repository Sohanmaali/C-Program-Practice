
/*----------------- count number of negetivr positive and ziro of Array ------------------------------------*/

#include <stdio.h>
int main()
{
    int i, size, pos = 0, neg = 0, ziro = 0;
    int arry[size];

    printf("Enter size of arry : ");
    scanf("%d", &size);
    
    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of Arry : ", i + 1);
        scanf("%d", &arry[i]);
    }

    /*----------------- count number of  positive   ------------------------------------*/
    for (i = 0; i < size; i++)
    {
        if (arry[i] > 0)
        {
            pos++;
        }
        /*----------------- count number of negetive   ------------------------------------*/
        else if (arry[i] < 0)
        {
            neg++;
        }
        /*----------------- count number of ziro  ------------------------------------*/
        else
        {
            ziro++;
        }
    }
    /*----------------- printf negetive positive or zero  ------------------------------------*/

    printf("negetive number = %d \n", neg);
    printf("positive number = %d \n", pos);
    printf("ziro number = %d ", ziro);
    return 0;
}