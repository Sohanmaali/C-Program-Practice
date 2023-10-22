// Write a C program to read and print elements of array.
#include <stdio.h>

int main()
{
    int i, size;
    printf("Enter size of Array :");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i <= size - 1; i++)
    {
        printf("Ente %d Element of Array : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i <= size - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}