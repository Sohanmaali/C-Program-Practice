/*----------------print reverse of array a part----------------*/
#include <stdio.h>
#define max_size 1000
/*----------------------Function dicleration-------------------------------*/
int reverse(int arr[], int n, int m)
{
    int temp, i, j;
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
    int array[max_size];
    int size, i, n;

    printf("Enter size of array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of array : ", i + 1);
        scanf("%d", &array[i]);
    }
    /*----------------take indax for reverse----------------*/
    printf("Enter rotetion turm : ");
    scanf("%d", &n);

    n %= size;
    reverse(array, 0, size - 1); // function calling
    reverse(array, 0, n - 1);    // function calling
    reverse(array, n, size - 1); // function calling

    /*----------------print reverse of array----------------*/
    printf("After reverse : ");

    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}