/*----------------- C program to replace all Even elements by 0 and Odd by 1 ------------------------------------*/

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

    /*----------------- replace all Even elements by 0 and Odd by 1  ------------------------------------*/
    for (i = 1; i < size; i++)
    {

        if (arry[i] % 2 == 0)
        {
            arry[i] = 0;
        }
        else
        {
            arry[i] = 1;
        }
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", arry[i]);
    }

    return 0;
}