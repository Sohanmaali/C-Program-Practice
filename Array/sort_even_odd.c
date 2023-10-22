/*---------------C program to sort even and odd elements of array separately----------------*/

#include <stdio.h>
#define max_size 1000
int main()
{
    int arry[max_size], arr[max_size];
    int size, i, j, even, odd;

    printf("Enter size of array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter %d elementd of arrya : ", i + 1);
        scanf("%d", &arry[i]);
    }
    /*---------------Find even num----------------*/

    for (i = 0, j = 0; i < size; i++)
    {
        if (arry[i] % 2 == 0)
        {
            arr[j] = arry[i];
            j++;
        }
    }
    /*---------------Find even num----------------*/
    for (i = 0; i < size; i++)
    {
        if (arry[i] % 2 != 0)
        {
            arr[j] = arry[i];
            j++;
        }
    }
    /*---------------print even odd num----------------*/
    for (i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}