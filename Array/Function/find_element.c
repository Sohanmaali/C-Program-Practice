/*----------Write a program in C to find the missing number in a given array.----------*/

#include <stdio.h>

/*---------function diclaretion-------------*/
int Find_element(int ary[], int size, int serch)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (ary[i] == serch)
        {
            return 1;
        }
    }
    return 0;
}
/*---------------main function start----------------*/
int main()
{
    int arry[100];
    int size, i, serch;

    printf("Enter size of array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter %d alement of array : ", i + 1);
        scanf("%d", &arry[i]);
    }

    printf("Enter serching element : ");
    scanf("%d", &serch);

    if (Find_element(arry, size, serch) == 1)
    {
        printf("%d found in array", serch);
    }
    else
    {
        printf("%d not found in array", serch);
    }
    return 0;
}