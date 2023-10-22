#include <stdio.h>

int main()
{
    int n[100], n1, num, i, j, max, slarg;
    printf("Enter size of array : ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("Enter %d element of array : ", i);
        scanf("%d", &n[i]);
    }
    printf("enter found element : ");
    scanf("%d", &n1);

    for (i = 0; i < num; i++)
    {

        if (n[i] == n1)
        {
            max++;
            printf("element found index %d ", i);
            break;
        }
    }
    if (max == 0)
    {
        printf("element not foun");
    }

    return 0;
}
