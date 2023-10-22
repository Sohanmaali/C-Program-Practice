// Delete an element form arry :
#include <stdio.h>
int main()
{
    int i, size, delet, ind;

    printf("Enter size of arry : ");
    scanf("%d", &size);

    int arry[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of Arry : ", i + 1);
        scanf("%d", &arry[i]);
    }

    printf("enter num of delet : ");
    scanf("%d", &delet);
    printf("After deleting num : ");

    for (i = 0; i < size; i++)
    {
        if (arry[i] == delet)
        {
            continue;
        }
        printf("%d ", arry[i]);
    }

    return 0;
}