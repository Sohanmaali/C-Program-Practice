/*check the Eliment of the array is the palindrom or not
complete_______08/03/2023{ [Array]*/

#include <stdio.h>

int main()
{
    /******input size*******/
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];
    int i, j, count = 0;
    printf("Enter array Eliment:"); /*****input eliment*****/
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0, j = (size - 1); i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            printf("Array Eliment is not pelindrom:");
            break;
        }
        else
        {
            count = count + 1;
        }
    }
    if (count == (size) / 2)
    {
        printf("Array is palindrom:");
    }

    return 0;
}