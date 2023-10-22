// reverse of Array

#include <stdio.h>
#define MAX_SIZE 1000 // Maximum array size

int main()
{
    int arr[MAX_SIZE], size, i;
    /* Input size of the array */
    printf("Enter size of the array : ");
    scanf("%d", &size);

    /* Input array elements */
    printf("Enter elements in the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("reverse of Array : ");
    for (i = size-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}