/*----------------print reverse of array a part----------------*/

#include <stdio.h>
#define max_size 1000

/*----------------------Function dicleration-------------------------------*/
int reverse(int arr[], int n, int m) // this functionreverse of array part
{
    int i, j, temp;
    /*----------------reverse of array part----------------*/
    for (i = n, j = m; i <= j; i++, j--)
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
    int temp = 0, size, si, ei;

    printf("Enter size of array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of array : ", i + 1);
        scanf("%d", &arry[i]);
    }
    /*----------------take indax for reverse----------------*/
    printf("Enter starting indax : ");
    scanf("%d", &si);
    printf("Enter ending indax : ");
    scanf("%d", &ei);

    /*----------------print reverse of array----------------*/
    reverse(arry, si, ei); // function calling
    printf("After reverse : ");

    for (i = 0; i < size; i++)
    {
        printf("%d ", arry[i]);
    }
    return 0;
}