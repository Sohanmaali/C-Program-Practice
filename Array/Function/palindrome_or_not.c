/*----------------Check array is palindrome or not----------------*/

#include <stdio.h>
#define max_size 1000
/*----------------------Function dicleration-------------------------------*/
int reverse(int ar[], int n)
{
    int i, j, temp = 0;
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        if (ar[i] != ar[j])
        {
            printf("not palindrome\n");
            break;
        }

        else
        {
            temp++;
        }
    }
    if (temp == n / 2)
    {
        printf("palindrome\n ");
    }
}
/*----------------------main function start-------------------------------*/
int main()
{
    int arry[max_size], i, j;
    int temp = 0, size;

    printf("Enter size of array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of array :", i + 1);
        scanf("%d", &arry[i]);
    }
    reverse(arry, size); // function calling

    return 0;
}