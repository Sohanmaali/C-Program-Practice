#include <stdio.h>

int main()
{
    int n[100], num, i, j, mid, low, hig, n1, count = 0;
    printf("Enter size of array : ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("Enter %d element of array : ", i);
        scanf("%d", &n[i]);
    }
    printf("enter found element : ");
    scanf("%d", &n1);

    low = 0;
    hig = num;

    while (low <= hig)
    {
        mid = (low + hig) / 2;
        if (n1 == n[mid])
        {
            count++;
            printf("element prisent in array %d : ", mid);
            break;
        }
        else if (n[mid] <= n1)
        {
            low = mid + 1;
        }
        else
        {
            hig = mid - 1;
        }
    }
    if (count == 0)
    {
        printf("element not found");
    }

    return 0;
}