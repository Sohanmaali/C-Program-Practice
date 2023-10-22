#include <stdio.h>

int main()
{
    int n[100], i, j, num, in;

    for (i = 0; i < 6; i++)
    {
        printf("Enter %d element of array : ", i + 1);
        scanf("%d", &n[i]);
    }
    printf("Enter num : ");
    scanf("%d", &num);

    printf("Enter num : ");
    scanf("%d", &in);

    for (i = 6; i > in; i--)
    {
        n[i] = n[i - 1];
    }
    n[in] = num;
    for (i = 0; i <= 6; i++)
        printf("%d ", n[i]);

    return 0;
}