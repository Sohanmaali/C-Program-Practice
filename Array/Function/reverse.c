/*----------------print reverse of array----------------*/

#include <stdio.h>
#define max_size 1000

/*----------------------Function dicleration-------------------------------*/
int reverse(int arr[], int n)
{
    int i, j, temp;
    /*----------------reverse of array----------------*/
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return 0;
}
/*----------------main function start----------------*/
int main()
{
    int arry[max_size], i, j;
    int temp = 0, size;

    printf("Enter size of array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of array : ", i + 1);
        scanf("%d", &arry[i]);
    }

    /*----------------print reverse of array----------------*/
    reverse(arry, size); // function calling
    printf("After reverse : ");

    for (i = 0; i < size; i++)
    {
        printf("%d ", arry[i]);
    }
    return 0;
}