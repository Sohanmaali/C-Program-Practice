// insert an element in array
#include <stdio.h>
int main()
{
    int i, size, ins, ind;

    printf("Enter size of arry : ");
    scanf("%d", &size);

    int arry[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of Arry : ", i + 1);
        scanf("%d", &arry[i]);
    }
    /*----------------- take value of changing ------------------------------------*/

    printf("Enter a num : ");
    scanf("%d", &ins);

    printf("Enter endex : ");
    scanf("%d", &ind);

    /*----------------- insart value and print array ------------------------------------*/

    arry[ind] = ins;
    printf("After insart index : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arry[i]);
    }

    return 0;
}