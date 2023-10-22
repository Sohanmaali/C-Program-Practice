
/*----------------- program to find maximum and minimum element in an array. ------------------------------------*/

#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int i, size, max, mini;
    int arry[MAX_SIZE];
    printf("Enter size of arry : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of Arry : ", i + 1);
        scanf("%d", &arry[i]);
    }

    max = arry[0];
    mini = arry[0];

    /*----------------- calculate maximum and minimum value of array. ------------------------------------*/

    for (i = 1; i < size; i++)
    {
        if (max < arry[i])

        {
            max = arry[i];
        }
        if (mini > arry[i])

        {
            mini = arry[i];
        }
    }
    /*----------------- print maximum and minimum value of array. ------------------------------------*/

    printf("Maxim num = : ");
    printf("%d \n", max);

    printf("Minimam num = : ");
    printf("%d ", mini);

    return 0;
}